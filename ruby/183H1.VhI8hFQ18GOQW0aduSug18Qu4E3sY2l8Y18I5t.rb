
        
                  # First determine the proper array of VMs.
          vms = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
            # This returns all the registered host capabilities.
        #
        # @return [Hash]
        def host_capabilities
          results = Hash.new { |h, k| h[k] = Registry.new }
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
        it 'generates the aspects_manage fixture', :fixture => true do
      get :index, params: {a_id: @aspect.id}
      save_fixture(html_for('body'), 'aspects_manage')
    end
    
        it 'does redirect if there is an invalid invite token' do
      get :new, params: {invite: {token: 'fssdfsd'}}
      expect(response).to redirect_to new_user_session_path
    end
    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    module Jekyll
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)
    
        # Reference
    # http://www.debian.org/doc/manuals/maint-guide/first.en.html
    # http://wiki.debian.org/DeveloperConfiguration
    # https://github.com/jordansissel/fpm/issues/37
    if ENV.include?('DEBEMAIL') and ENV.include?('DEBFULLNAME')
      # Use DEBEMAIL and DEBFULLNAME as the default maintainer if available.
      @maintainer = '#{ENV['DEBFULLNAME']} <#{ENV['DEBEMAIL']}>'
    else
      # TODO(sissel): Maybe support using 'git config' for a default as well?
      # git config --get user.name, etc can be useful.
      #
      # Otherwise default to user@currenthost
      @maintainer = '<#{ENV['USER']}@#{Socket.gethostname}>'
    end
    
      def to_s_extension; 'txz'; end
    
      # Helper for group lookup
  def gid2group(gid)
    begin
      grent = Etc.getgrgid(gid)
      return grent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find group for gid #{gid}')
      return gid.to_s
    end
  end # def uid2user
end # class FPM::Target::Puppet
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)