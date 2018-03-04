
        
              # Run a certain action
      def trigger(command: nil, serial: nil)
        android_serial = serial != '' ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, adb_path, command].join(' ')
        Action.sh(command)
      end
    
        attr_accessor :crashlytics_path
    attr_accessor :api_key
    attr_accessor :build_secret
    attr_accessor :emails
    attr_accessor :groups
    attr_accessor :schemes
    attr_accessor :export_method
    
            expect(result).to eq('/usr/local/bin/cloc --exclude-dir=test1,test2,build --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'properly removes new lines of the build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: '24\n', xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
          it 'it increments all targets minor version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'minor')
        end').runner.execute(:test)
    
            # This method is called if the underying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
      def enough_poll_answers
    errors.add(:poll_answers, I18n.t('activerecord.errors.models.poll.attributes.poll_answers.not_enough_poll_answers')) if poll_answers.size < 2
  end
    
      def add_invites
    InvitationCode.find_by_token(params[:invite_code_id]).add_invites!
    redirect_to user_search_path
  end
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)