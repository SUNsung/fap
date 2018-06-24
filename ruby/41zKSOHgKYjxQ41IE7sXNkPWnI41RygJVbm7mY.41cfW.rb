
        
            def test_accept_run_command_multiple_times
      Timeout.timeout(TIMEOUT) do
        assert_match(/^ready/,@worker_out.gets)
        @worker_in.puts 'run #{TESTS}/ptest_first.rb test'
        assert_match(/^okay/,@worker_out.gets)
        assert_match(/^record/,@worker_out.gets)
        assert_match(/^p/,@worker_out.gets)
        assert_match(/^done/,@worker_out.gets)
        assert_match(/^ready/,@worker_out.gets)
        @worker_in.puts 'run #{TESTS}/ptest_second.rb test'
        assert_match(/^okay/,@worker_out.gets)
        assert_match(/^record/,@worker_out.gets)
        assert_match(/^p/,@worker_out.gets)
        assert_match(/^done/,@worker_out.gets)
        assert_match(/^record/,@worker_out.gets)
        assert_match(/^p/,@worker_out.gets)
        assert_match(/^done/,@worker_out.gets)
        assert_match(/^ready/,@worker_out.gets)
      end
    end
    
        def gen_random(n)
      ret = Random.urandom(1)
      if ret.nil?
        begin
          require 'openssl'
        rescue NoMethodError
          raise NotImplementedError, 'No random device'
        else
          @rng_chooser.synchronize do
            class << self
              remove_method :gen_random
              alias gen_random gen_random_openssl
            end
          end
          return gen_random(n)
        end
      else
        @rng_chooser.synchronize do
          class << self
            remove_method :gen_random
            alias gen_random gen_random_urandom
          end
        end
        return gen_random(n)
      end
    end
    
        def initialize
    end
    
          it 'does not allow any other additional option' do
        lambda { 'İS'.downcase(:lithuanian, :ascii) }.should raise_error(ArgumentError)
      end
    end
    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
          # @param  [Xcodeproj::Project] project
      #         The xcode project to generate a podfile for.
      #
      # @return [String] the text of the Podfile for the provided project
      #
      def podfile_template(project)
        podfile = ''
        podfile << 'project '#{@project_path}'\n\n' if @project_path
        podfile << <<-PLATFORM.strip_heredoc
          # Uncomment the next line to define a global platform for your project
          # platform :ios, '9.0'
        PLATFORM
    
            TEMPLATE_REPO = 'https://github.com/CocoaPods/pod-template.git'.freeze
        TEMPLATE_INFO_URL = 'https://github.com/CocoaPods/pod-template'.freeze
        CREATE_NEW_POD_INFO_URL = 'http://guides.cocoapods.org/making/making-a-cocoapod'.freeze
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
          super
    end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
    
    
        # Same as to_s
    def inspect
      to_s
    end
    
            Paperclip::Validators.constants.each do |constant|
          if constant.to_s =~ /\AAttachment(.+)Validator\z/
            validator_kind = $1.underscore.to_sym
    
          def check_validity!
        unless options.has_key?(:content_type) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :content_type or :not to the validator'
        end
      end
    end