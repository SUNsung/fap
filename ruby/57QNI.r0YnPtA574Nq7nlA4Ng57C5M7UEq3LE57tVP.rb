        render_and_write
    
    MODE = ARGV.first || 'cpu'
PROF_OUTPUT_FILE = File.expand_path('../tmp/stackprof-#{MODE}-#{Time.now.strftime('%Y%m%d%H%M')}.dump', __dir__)
    
          def render!(*args)
        measure_time do
          measure_bytes do
            @template.render!(*args)
          end
        end
      end
    
        # Require all .rb files if safe mode is off
    #
    # Returns nothing.
    def require_plugin_files
      unless site.safe
        plugins_path.each do |plugin_search_path|
          plugin_files = Utils.safe_glob(plugin_search_path, File.join('**', '*.rb'))
          Jekyll::External.require_with_graceful_fail(plugin_files)
        end
      end
    end
    
        h = @cls[[['a', 100], 'b', ['c', 300]]]
    assert_equal(100, h['a'])
    assert_equal(nil, h['b'])
    assert_equal(300, h['c'])
  end
    
        t = Time.at(10000000000000000000000)
    assert_equal('<<10000000000000000000000>>', t.strftime('<<%s>>'))
    assert_equal('<<010000000000000000000000>>', t.strftime('<<%24s>>'))
    assert_equal('<<010000000000000000000000>>', t.strftime('<<%024s>>'))
    assert_equal('<< 10000000000000000000000>>', t.strftime('<<%_24s>>'))
  end
    
      it 'decodes the number of ints requested by the count modifier' do
    'abcedfgh'.unpack(unpack_format(2)).should == [1701012065, 1751606884]
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
      def gist_logs
    raise FormulaUnspecifiedError if ARGV.resolved_formulae.length != 1
    
    require 'formula'
    
    class PostgresqlRequirement < Requirement
  fatal true
  satisfy do
    odisabled('PostgresqlRequirement', ''depends_on \'postgresql\''')
  end
end
    
        def env(*settings, &block)
      if block_given?
        @env_proc = block
      else
        super
      end
    end
  end