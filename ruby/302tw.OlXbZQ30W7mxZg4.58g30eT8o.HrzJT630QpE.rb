
        
          test 'token_and_options returns correct token' do
    token = 'rcHu+HzSFw89Ypyhn/896A=='
    actual = ActionController::HttpAuthentication::Token.token_and_options(sample_request(token)).first
    expected = token
    assert_equal(expected, actual)
  end
    
      class ExclaimerMiddleware
    def initialize(app)
      @app = app
    end
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
        # Access the message instance.
    def message
      @_message
    end
    
        class DeliveryJob < ActionMailer::DeliveryJob # :nodoc:
      def perform(mailer, mail_method, delivery_method, params, *args)
        mailer.constantize.with(params).public_send(mail_method, *args).send(delivery_method)
      end
    end
  end
end

    
      def test_send_mail
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        with_translation 'de', email_subject: '[Anmeldung] Willkommen' do
          get '/test/send_mail'
          assert_equal 'Mail sent - Subject: [Anmeldung] Willkommen', @response.body
        end
      end
    end
  end
    
        mail_with_defaults do |format|
      format.html { render(inline: '<%= block_format @text %>') }
    end
  end
    
        version 'C++' do
      self.base_url = 'https://api.haxe.org/cpp/'
    end
    
        version '6 LTS' do
      self.release = '6.13.1'
      self.base_url = 'https://nodejs.org/dist/latest-v6.x/docs/api/'
    end
    
        process_font_assets
    process_stylesheet_assets
    process_javascript_assets
    store_version
  end
    
        alias log puts
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
    namespace :bower do
    
      def create_issue(repo, title, body)
    url = 'https://api.github.com/repos/#{repo}/issues'
    data = { 'title' => title, 'body' => body }
    scopes = GitHub::CREATE_ISSUE_FORK_OR_PR_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
      def env_proc
    self.class.env_proc
  end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
    (allow file-read-metadata)
(allow file-read*
  ; This is currenly only added because using `xcodebuild` to build a resource
  ; bundle target starts a FSEvents stream on `/`. No idea why that would be
  ; needed, but for now it doesn’t seem like a real problem.
  (literal '/')
  (regex
    ; TODO see if we can restrict this more, but it's going to be hard
    #'^/Users/[^.]+/*'
    ;#'^/Users/[^.]+/.netrc'
    ;#'^/Users/[^.]+/.gemrc'
    ;#'^/Users/[^.]+/.gem/*'
    ;#'^/Users/[^.]+/Library/.*'
    #'^/Library/*'
    #'^/System/Library/*'
    #'^/usr/lib/*'
    #'^/usr/share/*'
    #'^/private/*'
    #'^/dev/*'
    #'^<%= ruby_prefix %>'
    #'^<%= pod_prefix %>'
    #'^<%= xcode_app_path %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def configure_template
          UI.section('Configuring #{@name} template.') do
            Dir.chdir(@name) do
              if File.exist?('configure')
                system({ 'COCOAPODS_VERSION' => Pod::VERSION }, './configure', @name, *@additional_args)
              else
                UI.warn 'Template does not have a configure file.'
              end
            end
          end
        end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end