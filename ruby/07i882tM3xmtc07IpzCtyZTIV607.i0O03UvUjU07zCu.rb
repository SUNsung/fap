
        
        module Commander
  # This class override the run method with our custom stack trace handling
  # In particular we want to distinguish between user_error! and crash! (one with, one without stack trace)
  class Runner
    # Code taken from https://github.com/commander-rb/commander/blob/master/lib/commander/runner.rb#L50
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
        context 'passing command arguments to the system' do
      it 'passes a string as a string' do
        expect_command('git commit')
        Fastlane::Actions.sh('git commit')
      end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
      describe :render do
    let(:screenshots) { [] }
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
        def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        DATA_URL = 'data:'.freeze
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
      # Get message for given
  def find_message(kind, options = {})
    options[:scope] ||= translation_scope
    options[:default] = Array(options[:default]).unshift(kind.to_sym)
    options[:resource_name] = resource_name
    options = devise_i18n_options(options)
    I18n.t('#{options[:resource_name]}.#{kind}', options)
  end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
          # Set up a subject doing an I18n lookup. At first, it attempts to set a subject
      # based on the current mapping:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           user_subject: '...'
      #
      # If one does not exist, it fallbacks to ActionMailer default:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           subject: '...'
      #
      def subject_for(key)
        I18n.t(:'#{devise_mapping.name}_subject', scope: [:devise, :mailer, key],
          default: [:subject, key.to_s.humanize])
      end
    end
  end
end

    
          selected_modules = modules.map(&:to_sym).uniq.sort_by do |s|
        Devise::ALL.index(s) || -1  # follow Devise::ALL order
      end
    
      gem.licenses      = ['MIT']
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def version
      ['--version', '-V',
       'Display the program version.',
       lambda do |_value|
         puts 'Capistrano Version: #{Capistrano::VERSION} (Rake Version: #{Rake::VERSION})'
         exit
       end]
    end
    
            if Rake::Task.task_defined?('deploy:check')
          before 'deploy:check', '#{scm_name}:check'
        end
    
            private
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
          include Capistrano::ProcHelpers
    
          return false
    end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
    desc 'Create a release build and push to rubygems'
task :release => :build do
  unless `git branch` =~ /^\* master$/
    puts 'You must be on the master branch to release!'
    exit!
  end
  sh 'git commit --allow-empty -a -m 'Release #{version}''
  sh 'git pull --rebase origin master'
  sh 'git tag v#{version}'
  sh 'git push origin master'
  sh 'git push origin v#{version}'
  sh 'gem push pkg/#{name}-#{version}.gem'
end
    
          def spree_dom_id(record)
        dom_id(record, 'spree')
      end
    
            css_classes = ['sidebar-menu-item d-block w-100 position-relative']
    
      describe 'listing orders' do
    it 'lists existing orders' do
      within_row(1) do
        expect(column_text(2)).to eq 'R100'
        expect(find('td:nth-child(3)')).to have_css '.badge-considered_risky'
        expect(column_text(4)).to eq 'cart'
      end
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
            private
    
          @@creditcard_attributes = [
        :id, :month, :year, :cc_type, :last_digits, :name,
        :gateway_customer_profile_id, :gateway_payment_profile_id
      ]
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
    # Now, add our init-scripts, systemd services, and so on:
pleaserun = package.convert(FPM::Package::PleaseRun)
pleaserun.input ['/usr/bin/my-executable', '--foo-from', 'bar']
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end