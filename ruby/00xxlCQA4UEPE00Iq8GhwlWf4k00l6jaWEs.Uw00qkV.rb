
        
              # @return (String) The version number of this version
      attr_accessor :version
    
        def get_build_info_for_review(app_id: nil, train: nil, build_number: nil, platform: 'ios')
      url = 'ra/apps/#{app_id}/platforms/#{platform}/trains/#{train}/builds/#{build_number}/testInformation'
      r = request(:get) do |req|
        req.url(url)
        req.headers['Content-Type'] = 'application/json'
      end
      handle_itc_response(r.body)
    
        #   it 'can add a new trailer given a valid externally provided preview screenshot' do
    #     # remove existing
    #     version.upload_trailer!(nil, 'English', 'ipad')
    
          # delete iap
      stub_request(:delete, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps/1194457865').
        to_return(status: 200, body: '', headers: {})
      # create consumable iap
      stub_request(:post, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps').
        with(body: itc_read_fixture_file('iap_create.json')).
        to_return(status: 200, body: itc_read_fixture_file('iap_detail.json'),
                 headers: { 'Content-Type' => 'application/json' })
      # create recurring iap
      stub_request(:post, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps').
        with(body: itc_read_fixture_file('iap_create_recurring.json')).
        to_return(status: 200, body: itc_read_fixture_file('iap_detail_recurring.json'),
                  headers: { 'Content-Type' => 'application/json' })
      # create recurring iap witout pricing
      stub_request(:post, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps').
        with(body: itc_read_fixture_file('iap_create_recurring_without_pricing.json')).
        to_return(status: 200, body: itc_read_fixture_file('iap_detail_recurring.json'),
                  headers: { 'Content-Type' => 'application/json' })
      # iap consumable template
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps/consumable/template').
        to_return(status: 200, body: itc_read_fixture_file('iap_consumable_template.json'),
                 headers: { 'Content-Type' => 'application/json' })
      # iap recurring template
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps/recurring/template').
        to_return(status: 200, body: itc_read_fixture_file('iap_recurring_template.json'),
                  headers: { 'Content-Type' => 'application/json' })
      # iap edit family
      stub_request(:put, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/iaps/family/20373395/').
        with(body: itc_read_fixture_file('iap_family_edit_versions.json')).
        to_return(status: 200, body: itc_read_fixture_file('iap_family_detail.json'),
                    headers: { 'Content-Type' => 'application/json' })
    
          def initialize(path = nil, require_variable_prefix = true)
        version_var_name = 'version'
        variable_prefix = require_variable_prefix ? /\w\./ : //
        @version_regex = /^(?<begin>[^#]*#{variable_prefix}#{version_var_name}\s*=\s*[''])(?<value>(?<major>[0-9]+)(\.(?<minor>[0-9]+))?(\.(?<patch>[0-9]+))?(?<appendix>(\.[0-9]+)*)?(-(?<prerelease>(.+)))?)(?<end>[''])/i
    
        context 'when semantic version' do
      it 'returns the current version once parsed' do
        test_content = 'spec.version = '1.3.2''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2')
        expect(@version_podspec_file.version_value).to eq('1.3.2')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
      end
    
          def pipe(device_type, language, locale)
        log_path = xcodebuild_log_path(device_type: device_type, language: language, locale: locale)
        return ['| tee #{log_path.shellescape} | xcpretty #{Snapshot.config[:xcpretty_args]}']
      end
    
            begin
          Actions.sh(command)
    
          def self.description
        'Generate a changelog using the Changes section from the current Jenkins build'
      end
    
        it 'doesn't adds the dependency without OS version requirements' do
      spec.uses_from_macos('foo')
      spec.uses_from_macos('bar' => :head)
    
        attr_reader :force
    attr_accessor :downloaded_path
    
        def metadata_timestamped_path(version: self.version, timestamp: :latest, create: false)
      raise CaskError, 'Cannot create metadata path when timestamp is :latest.' if create && timestamp == :latest
    
          external_ruby_cmd = tap_cmd_directories.map { |d| d/'brewcask-#{command}.rb' }
                                             .find(&:file?)
      external_ruby_cmd ||= which('brewcask-#{command}.rb', path)
    
    describe Cask::Cmd::Cache, :cask do
  let(:local_transmission) {
    Cask::CaskLoader.load(cask_path('local-transmission'))
  }
    
          downloader.fetch
    
      def mirror(val)
    mirrors << val
  end
    
    if rails_env != 'development'
  config('path vendor/bundle')
  config('frozen true')
  config('disable_shared_gems true')
end
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
        unless user
      EmailInviter.new(email, inviter).send!
      flash[:notice] = 'invitation sent to #{email}'
    else
      flash[:notice]= 'error sending invite to #{email}'
    end
    redirect_to user_search_path, :notice => flash[:notice]
  end
    
          def save_request_parameters
        session[:client_id] = @o_auth_application.client_id
        session[:response_type] = @response_type
        session[:redirect_uri] = @redirect_uri
        session[:scopes] = scopes_as_space_seperated_values
        session[:state] = params[:state]
        session[:nonce] = params[:nonce]
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
    
        if @aspect.update_attributes!(aspect_params)
      flash[:notice] = I18n.t 'aspects.update.success', :name => @aspect.name
    else
      flash[:error] = I18n.t 'aspects.update.failure', :name => @aspect.name
    end
    render :json => { :id => @aspect.id, :name => @aspect.name }
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          @contact_ids = if params[:contact_id]
                       current_user.contacts.find(params[:contact_id]).id
                     elsif params[:aspect_id]
                       current_user.aspects.find(params[:aspect_id]).contacts.pluck(:id).join(',')
                     end
    
      def types
    {
      'also_commented'       => 'Notifications::AlsoCommented',
      'comment_on_post'      => 'Notifications::CommentOnPost',
      'liked'                => 'Notifications::Liked',
      'mentioned'            => 'Notifications::MentionedInPost',
      'mentioned_in_comment' => 'Notifications::MentionedInComment',
      'reshared'             => 'Notifications::Reshared',
      'started_sharing'      => 'Notifications::StartedSharing',
      'contacts_birthday'    => 'Notifications::ContactsBirthday'
    }
  end
  helper_method :types
end

    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^it will not recreate the file$/) do
  #
end
    
            if built_in_scm_name?
          load_built_in_scm
        else
          # Compatibility with existing 3.x third-party SCMs
          register_legacy_scm_hooks
          load_legacy_scm_by_name
        end
      end
    
          def initialize(variables)
        super(variables)
        @validators = {}
      end
    
        def autocorrect_unneeded_disables(source, cop)
      cop.processed_source = source
    
    module RuboCop
  module Cop
    module Layout
      # This cop checks for the placement of the closing parenthesis
      # in a method call that passes a HEREDOC string as an argument.
      # It should be placed at the end of the line containing the
      # opening HEREDOC tag.
      #
      # @example
      #   # bad
      #
      #      foo(<<-SQL
      #        bar
      #      SQL
      #      )
      #
      #      foo(<<-SQL, 123, <<-NOSQL,
      #        bar
      #      SQL
      #        baz
      #      NOSQL
      #      )
      #
      #      foo(
      #        bar(<<-SQL
      #          baz
      #        SQL
      #        ),
      #        123,
      #      )
      #
      #   # good
      #
      #      foo(<<-SQL)
      #        bar
      #      SQL
      #
      #      foo(<<-SQL, 123, <<-NOSQL)
      #        bar
      #      SQL
      #        baz
      #      NOSQL
      #
      #      foo(
      #        bar(<<-SQL),
      #          baz
      #        SQL
      #        123,
      #      )
      #
      class HeredocArgumentClosingParenthesis < Cop
        include RangeHelp
    
            expect(cop.messages).to eq(['Empty line missing at block body '\
                                    'beginning.',
                                    'Empty line missing at block body end.'])
      end
    
            expect_offense(<<~RUBY)
          def self.some_method(foo)
                               ^^^ #{message}
          end
        RUBY
      end
    end
    
      [jekyllPid, compassPid].each { |pid| Process.wait(pid) }
end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
        def _send_keys(t, e)
      '#{project.tmux} send-keys -t #{t} #{e} C-m'
    end
  end
end

    
        def initialize(window_yaml, index, project)
      first_key = window_yaml.keys.first
    
    # Copied from minitest.
def capture_io
  require 'stringio'
    
        desc 'version', COMMANDS[:version]
    map '-v' => :version