<?php

namespace Rector\DeadCode\Tests\Rector\ClassMethod\RemoveUnusedPrivateMethodRector\Fixture;

final class SkipArrayCallalbesFqn
{
    public function run()
    {
        $array  = [3, 2, 1];

        usort($array, [SkipArrayCallalbesFqn::class, 'sort']);

        return $array;
    }

    private function sort($a, $b)
    {
        return $a <=> $b;
    }
}
