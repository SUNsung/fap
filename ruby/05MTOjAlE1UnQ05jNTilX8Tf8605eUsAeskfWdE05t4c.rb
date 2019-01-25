
        
            def suggest_ruby_reinstall(e)
      ui = FastlaneCore::UI
      ui.error('-----------------------------------------------------------------------')
      ui.error(e.to_s)
      ui.error('')
      ui.error('SSL errors can be caused by various components on your local machine.')
      if Gem::Version.new(RUBY_VERSION) < Gem::Version.new('2.1')
        ui.error('Apple has recently changed their servers to require TLS 1.2, which may')
        ui.error('not be available to your system installed Ruby (#{RUBY_VERSION})')
      end
      ui.error('')
      ui.error('The best solution is to use the self-contained fastlane version.')
      ui.error('Which ships with a bundled OpenSSL,ruby and all gems - so you don't depend on system libraries')
      ui.error(' - Use Homebrew')
      ui.error('    - update brew with `brew update`')
      ui.error('    - install fastlane using:')
      ui.error('      - `brew cask install fastlane`')
      ui.error(' - Use One-Click-Installer:')
      ui.error('    - download fastlane at https://download.fastlane.tools')
      ui.error('    - extract the archive and double click the `install`')
      ui.error('-----------------------------------------------------------')
      ui.error('for more details on ways to install fastlane please refer the documentation:')
      ui.error('-----------------------------------------------------------')
      ui.error('        🚀       https://docs.fastlane.tools          🚀   ')
      ui.error('-----------------------------------------------------------')
      ui.error('')
      ui.error('You can also install a new version of Ruby')
      ui.error('')
      ui.error('- Make sure OpenSSL is installed with Homebrew: `brew update && brew upgrade openssl`')
      ui.error('- If you use system Ruby:')
      ui.error('  - Run `brew update && brew install ruby`')
      ui.error('- If you use rbenv with ruby-build:')
      ui.error('  - Run `brew update && brew upgrade ruby-build && rbenv install 2.3.1`')
      ui.error('  - Run `rbenv global 2.3.1` to make it the new global default Ruby version')
      ui.error('- If you use rvm:')
      ui.error('  - First run `rvm osx-ssl-certs update all`')
      ui.error('  - Then run `rvm reinstall ruby-2.3.1 --with-openssl-dir=/usr/local`')
      ui.error('')
      ui.error('If that doesn't fix your issue, please google for the following error message:')
      ui.error('  '#{e}'')
      ui.error('-----------------------------------------------------------------------')
    end
    
          it 'adds docset_min_xcode_version param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_min_xcode_version: '6.4'
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
    
              expect(result).to eq('#{CUSTOM_EXECUTABLE_NAME} lint --strict')
        end
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

    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
    end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          def mailer_sender(mapping, sender = :from)
        default_sender = default_params[sender]
        if default_sender.present?
          default_sender.respond_to?(:to_proc) ? instance_eval(&default_sender) : default_sender
        elsif Devise.mailer_sender.is_a?(Proc)
          Devise.mailer_sender.call(mapping.name)
        else
          Devise.mailer_sender
        end
      end
    
            # Removes reset_password token
        def clear_reset_password_token
          self.reset_password_token = nil
          self.reset_password_sent_at = nil
        end
    
    # usage rake new_page[my-new-page] or rake new_page[my-new-page.html] or rake new_page (defaults to 'new-page.markdown')
desc 'Create a new page in #{source_dir}/(filename)/index.#{new_page_ext}'
task :new_page, :filename do |t, args|
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  args.with_defaults(:filename => 'new-page')
  page_dir = [source_dir]
  if args.filename.downcase =~ /(^.+\/)?(.+)/
    filename, dot, extension = $2.rpartition('.').reject(&:empty?)         # Get filename and extension
    title = filename
    page_dir.concat($1.downcase.sub(/^\//, '').split('/')) unless $1.nil?  # Add path to page_dir Array
    if extension.nil?
      page_dir << filename
      filename = 'index'
    end
    extension ||= new_page_ext
    page_dir = page_dir.map! { |d| d = d.to_url }.join('/')                # Sanitize path
    filename = filename.downcase.to_url
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end