
        
        class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
      # Sets the resource creating an instance variable
  def resource=(new_resource)
    instance_variable_set(:'@#{resource_name}', new_resource)
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    class BugTest < ActionDispatch::IntegrationTest
  include Rack::Test::Methods
  include Warden::Test::Helpers
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
      def upgrade_account
    if signed_request_account.ostatus?
      signed_request_account.update(last_webfingered_at: nil)
      ResolveAccountWorker.perform_async(signed_request_account.acct)
    end
    
        def resubscribe
      authorize :instance, :resubscribe?
      params.require(:by_domain)
      Pubsubhubbub::SubscribeWorker.push_bulk(subscribeable_accounts.pluck(:id))
      redirect_to admin_instances_path
    end
    
      def encoded_challenge
    HTMLEntities.new.encode(params['hub.challenge'])
  end
    
    # Don't use Rake::GemPackageTast because we want prerequisites to run
# before we load the gemspec.
desc 'Build all the packages.'
task :package => [:revision_file, :date_file, :permissions] do
  version = get_version
  File.open(scope('VERSION'), 'w') {|f| f.puts(version)}
  load scope('sass.gemspec')
  Gem::Package.build(SASS_GEMSPEC)
  sh %{git checkout VERSION}
    
          process_result
    
          output = input_path if @options[:in_place]
      write_output(out, output)
    rescue Sass::SyntaxError => e
      raise e if @options[:trace]
      file = ' of #{e.sass_filename}' if e.sass_filename
      raise 'Error on line #{e.sass_line}#{file}: #{e.message}\n  Use --trace for backtrace'
    rescue LoadError => err
      handle_load_error(err)
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
          # Given an `@import`ed path, returns an array of possible
      # on-disk filenames and their corresponding syntaxes for that path.
      #
      # @param name [String] The filename.
      # @return [Array(String, Symbol)] An array of pairs.
      #   The first element of each pair is a filename to look for;
      #   the second element is the syntax that file would be in (`:sass` or `:scss`).
      def possible_files(name)
        name = escape_glob_characters(name)
        dirname, basename, extname = split(name)
        sorted_exts = extensions.sort
        syntax = extensions[extname]
    
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
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          def author
        first = page.last_version
        return DEFAULT_AUTHOR unless first
        first.author.name.respond_to?(:force_encoding) ? first.author.name.force_encoding('UTF-8') : first.author.name
      end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
  end