
        
        require 'cases/helper'
require 'models/post'
require 'models/comment'
require 'models/author'
require 'models/rating'
require 'models/categorization'
    
      teardown { ActiveStorage::Blob.all.each(&:purge) }
    
    require 'test_helper'
require 'stubs/test_server'
    
        def execute(args)
      topic_id = args[:topic_id]
      raise Discourse::InvalidParameters.new(:topic_id) unless topic_id.present?
    
            # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
          protected
    
              # Success, exit status 0
          0
        end
      end
    end
  end
end

    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
      def test_capture3
    o, e, s = Open3.capture3(RUBY, '-e', 'i=STDIN.read; print i+'o'; STDOUT.flush; STDERR.print i+'e'', :stdin_data=>'i')
    assert_equal('io', o)
    assert_equal('ie', e)
    assert(s.success?)
  end
    
      # The shortest way to test one proc
  def assert_compile_once(script, result_inspect:, insns: [])
    if script.match?(/\A\n.+\n\z/m)
      script = script.gsub(/^/, '  ')
    else
      script = ' #{script} '
    end
    assert_eval_with_jit('p proc {#{script}}.call', stdout: '#{result_inspect}\n', success_count: 1, insns: insns, uplevel: 2)
  end
    
      it 'throws an exception for a wrong type' do
    a = @s.typed_wrap_struct(1024)
    lambda { @s.typed_get_struct_other(a) }.should raise_error(TypeError)
  end
    
        set = Set['1',nil,'2',nil,'0','1',false]
    assert_equal(true, set === nil)
    assert_equal(true, set === false)
    assert_equal(true, set === '1')
    assert_equal(false, set === 0)
    assert_equal(false, set === true)
  end
    
      def test_strftime_yearday_on_last_day_of_year
    t = Time.utc(2015, 12, 31, 0, 0, 0)
    assert_equal('365', t.strftime('%j'))
    t = Time.utc(2016, 12, 31, 0, 0, 0)
    assert_equal('366', t.strftime('%j'))
    
      it 'decodes two shorts for two format characters' do
    'badc'.unpack(unpack_format(nil, 2)).should == [25185, 25699]
  end
    
      it 'implicitly has a count of one when no count is specified' do
    'abc'.unpack(unpack_format).should == ['a']
  end
    
      File.unlink(out) if (File.size(out) == 0)
    
          when :login_pass
    
    meterp.sock.close

    
        _cal[ver] = {
      :execve      => __cal + [__NC_execve].pack('n'),
      :getpeername => __cal + [__NC_getpeername].pack('n'),
      :accept      => __cal + [__NC_accept].pack('n'),
      :listen      => __cal + [__NC_listen].pack('n'),
      :bind        => __cal + [__NC_bind].pack('n'),
      :socket      => __cal + [__NC_socket].pack('n'),
      :connect     => __cal + [__NC_connect].pack('n'),
      :close       => __cal + [__NC_close].pack('n'),
      :kfcntl      => __cal + [__NC_kfcntl].pack('n'),
    }
    
    	def block_do(line)
		temp = line.split('\t')
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end