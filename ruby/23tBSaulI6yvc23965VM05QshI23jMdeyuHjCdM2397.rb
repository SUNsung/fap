
        
        module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
            private
    
        private
    
        # Direct access to partial rendering.
    def render_partial(context, options, &block) #:nodoc:
      PartialRenderer.new(@lookup_context).render(context, options, block)
    end
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def fish_completion_caveats
    if keg && keg.completion_installed?(:fish) && which('fish') then <<-EOS.undent
      fish completion has been installed to:
        #{HOMEBREW_PREFIX}/share/fish/vendor_completions.d
      EOS
    end
  end
    
          if path.symlink? || path.directory?
        next
      elsif path.extname == '.la'
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if path.mach_o_executable? || path.text_executable?
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end

    
        def self.disk_cleanup_size
      @@disk_cleanup_size
    end
    
      private
    
      def self.class_s(name)
    Formulary.class_s(name)
  end
    
    # See browser for an example
class GithubGistFormula < ScriptFileFormula
  def self.url(val)
    super
    version File.basename(File.dirname(val))[0, 6]
  end
end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            sign: true
          })
        end').runner.execute(:test)
    
          it 'adds use-ssh flag to command if use_ssh is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_ssh: true
            )
          end').runner.execute(:test)
    
          it 'works with :path param' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            path: '/tmp/test.keychain',
            password: 'testpassword',
            default_keychain: true,
            unlock: true,
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
            add_to_search_list: false,
          })
        end').runner.execute(:test)
        expect(result.size).to eq(4)
        expect(result[0]).to eq('security create-keychain -p testpassword /tmp/test.keychain')
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'works with certificate and password that contain spaces, special chars, or '\'' do
        cert_name = '\' test \'.cer'
        keychain = '\' test \'.keychain'
        password = '\'test pa$$word\''
    
              result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true,
              executable: '#{CUSTOM_EXECUTABLE_NAME}'
            )
          end').runner.execute(:test)
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
              # Decodes the e_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_e_data(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
      if config.log_to.include? 'file'
    # Configure an appender that will write log events to a file.
    if AppConfig.environment.logging.logrotate.enable?
      # The file will be rolled on a daily basis, and the rolled files will be kept
      # the configured number of days. Older files will be deleted. The default pattern
      # layout is used when formatting log events into strings.
      Logging.appenders.rolling_file('file',
                                     filename:      config.paths['log'].first,
                                     keep:          AppConfig.environment.logging.logrotate.days.to_i,
                                     age:           'daily',
                                     truncate:      false,
                                     auto_flushing: true,
                                     layout:        layout
                                    )
    else
      # No file rolling, use logrotate to roll the logfile.
      Logging.appenders.file('file',
                             filename:      config.paths['log'].first,
                             truncate:      false,
                             auto_flushing: true,
                             layout:        layout
                            )
    end
  end
    
        it 'should redirect back in the html version if it has > 0 notifications' do
      FactoryGirl.create(:notification, recipient: alice, type: 'Notifications::StartedSharing')
      get :read_all, params: {type: 'liked'}, format: :html
      expect(response).to redirect_to(notifications_path)
    end
    
          it 'should remove participation' do
        delete :destroy, params: {post_id: post.id}
        expect(alice.participations.where(:target_id => post.id)).not_to exist
        expect(response.code).to eq('200')
      end
    end
    
        it 'redirects #new to the login page' do
      get :new
      expect(flash[:error]).to eq(I18n.t('registrations.closed'))
      expect(response).to redirect_to new_user_session_path
    end
    
      gem.licenses      = ['MIT']
    
          def warn_add_git_to_capfile
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] Future versions of Capistrano will not load the Git SCM
plugin by default. To silence this deprecation warning, add the following to
your Capfile after `require 'capistrano/deploy'`:
    
          def add_roles(roles)
        Array(roles).each { |role| add_role(role) }
        self
      end
      alias roles= add_roles
    
          private
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          def previous_link
      end
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
    task :default => :test
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)
    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
    if defined?(::Rails) && Rails.respond_to?(:env) && !Rails.env.test?
  puts('**************************************************')
  puts('⛔️ WARNING: Sidekiq testing API enabled, but this is not the test environment.  Your jobs will not go to Redis.')
  puts('**************************************************')
end

    
        def app
      @app ||= build
    end