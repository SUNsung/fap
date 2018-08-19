
        
        Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
    options = {
  sort: true,
  limit: 30,
  format: :text,
}
    
        # Initialize a new Layout.
    #
    # site - The Site.
    # base - The String path to the source.
    # name - The String filename of the post file.
    def initialize(site, base, name)
      @site = site
      @base = base
      @name = name
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
      def profile_photo_url
   'https://graph.facebook.com/#{self.uid}/picture?type=large&access_token=#{URI.escape(self.access_token)}'
  end
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
        # @abstract
    #
    # Copy the contents of the cache-repository onto the release path
    #
    # @return void
    #
    def release
      raise NotImplementedError, 'Your SCM strategy module should provide a #release method'
    end
    
      desc 'Finish the deployment, clean up server(s).'
  task :finishing do
  end
    
    describe Capistrano::Application do
  it 'provides a --trace option which enables SSHKit/NetSSH trace output'
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
      it 'comparison of Accept-Language header is not case sensitive' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'A'
    expect(session).not_to be_empty
  end