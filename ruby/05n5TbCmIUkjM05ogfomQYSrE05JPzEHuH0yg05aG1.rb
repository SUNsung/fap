
        
          def merge_libs(*libs)
    libs.inject([]) do |x, y|
      y = y.inject([]) {|ary, e| ary.last == e ? ary : ary << e}
      y.each_with_index do |v, yi|
        if xi = x.rindex(v)
          x[(xi+1)..-1] = merge_libs(y[(yi+1)..-1], x[(xi+1)..-1])
          x[xi, 0] = y[0...yi]
          break
        end
      end and x.concat(y)
      x
    end
  end
    
      def test_bsearch_typechecks_return_values
    assert_raise(TypeError) do
      (1..42).bsearch{ 'not ok' }
    end
    c = eval('class C\u{309a 26a1 26c4 1f300};self;end')
    assert_raise_with_message(TypeError, /C\u{309a 26a1 26c4 1f300}/) do
      (1..42).bsearch {c.new}
    end
    assert_equal (1..42).bsearch{}, (1..42).bsearch{false}
  end
    
        # Should be able to look up object by object_id
    assert_equal previous_tenant, ObjectSpace._id2ref(previous_tenant.object_id)
    
        t = Time.utc(1592,3,14, 6,53,'58.97932384626433832795028841971'.to_r) # Pi Day
    assert_equal('03/14/1592  6:53:58.97932384626433832795028841971',
                 t.strftime('%m/%d/%Y %l:%M:%S.%29N'))
    assert_equal('03/14/1592  6:53:58.9793238462',
                 t.strftime('%m/%d/%Y %l:%M:%S.%10N'))
    assert_equal('03/14/1592  6:53:58.979323846',
                 t.strftime('%m/%d/%Y %l:%M:%S.%9N'))
    assert_equal('03/14/1592  6:53:58.97932384',
                 t.strftime('%m/%d/%Y %l:%M:%S.%8N'))
  end
    
    def to_array(proc)
  array = []
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
          unless file.file?
        return 'File #{file} could not be found'
      end