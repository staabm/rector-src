<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnUnionTypeRector\Fixture;

final class FalseBoolDocblock
{
    /**
     * @return array|bool some description
     */
    public function run()
    {
        if (rand(0, 1)) {
            return false;
        }

        return [];
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnUnionTypeRector\Fixture;

final class FalseBoolDocblock
{
    /**
     * @return array|bool some description
     */
    public function run(): false|array
    {
        if (rand(0, 1)) {
            return false;
        }

        return [];
    }
}

?>
