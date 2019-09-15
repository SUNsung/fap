
        
              it 'access build details and dSYM URL' do
        expect(build.dsym_url).to eq('https://some_dsym_url.com')
        expect(build.include_symbols).to eq(false)
        expect(build.number_of_asset_packs).to eq(1)
        expect(build.contains_odr).to eq(false)
        expect(build.build_sdk).to eq('13A340')
        expect(build.file_name).to eq('AppName.ipa')
      end
    end
    
        describe '#create!' do
      it 'works with valid data and defaults to English' do
        Spaceship::Tunes::Application.create!(name: 'My name',
                                              sku: 'SKU123',
                                              bundle_id: 'net.sunapps.123')
      end
    
            pretty = [new_lane]
        pretty = [current_platform, new_lane] if current_platform
        Actions.execute_action('Switch to #{pretty.join(' ')} lane') {} # log the action
        UI.message('Cruising over to lane '#{pretty.join(' ')}' 🚖')
    
        it 'doesn't crash if nil is provided' do
      result = csm.merge_profile_mapping(primary_mapping: nil,
                                       secondary_mapping: {},
                                           export_method: 'app-store')
      expect(result).to eq({})
    end
    
          context 'has candidates and one build, but no app version' do
        let(:fake_app) { make_fake_app }
        let(:fake_builds) do
          build = double('fake_build')
          allow(build).to receive(:train_version).and_return('1.2.3')
          allow(build).to receive(:build_version).and_return(1)
          allow(build).to receive(:upload_date).and_return(1_554_754_590)
          expect(build).to receive(:processing).and_return(true)
          [build]
        end
        let(:fake_builds_with_processed_build) do
          build = double('fake_build')
          allow(build).to receive(:train_version).and_return('1.2.3')
          allow(build).to receive(:build_version).and_return(1)
          allow(build).to receive(:upload_date).and_return(1_554_754_590)
          expect(build).to receive(:processing).and_return(false)
          [build]
        end
        let(:fake_version) do
          fake_version = double('fake_version')
          allow(fake_version).to receive(:app_version).and_return(nil)
          fake_version
        end
    
            require('simctl')
    
              # Store the number in the shared hash
          Actions.lane_context[SharedValues::BUILD_NUMBER] = build_number
        end
        return build_number
      rescue => ex
        return false if params[:hide_error_when_versioning_disabled]
        UI.error('Before being able to increment and read the version number from your Xcode project, you first need to setup your project properly. Please follow the guide at https://developer.apple.com/library/content/qa/qa1827/_index.html')
        raise ex
      end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :fallback_changelog,
                                       description: 'Fallback changelog if there is not one on Jenkins, or it couldn't be read',
                                       optional: true,
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :include_commit_body,
                                       description: 'Include the commit body along with the summary',
                                       optional: true,
                                       is_string: false,
                                       default_value: true)
        ]
      end
    
            has_output_method?(body)
      end
    
            expect(values[:changelog]).to eq('custom changelog')
      end
    
        before(:each) do
      allow(fake_app).to receive(:apple_id).and_return('123456789')
      allow(fake_app).to receive(:name).and_return(fake_app_name)
      allow(Spaceship::ConnectAPI::App).to receive(:get).and_return(fake_app)
      allow(Spaceship::ConnectAPI::App).to receive(:find).and_return(fake_app)
      allow(Spaceship::Tunes).to receive(:client).and_return(fake_client)
    
          select2('SF Weather', from: 'Sources')
      select2('Formatting Agent', from: 'Receivers')
    
      before(:each) do
    login_as(user)
  end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
    describe Agents::CommanderAgent do
  let(:target) {
    agents(:bob_website_agent)
  }
    
      # Override prefixes to consider the scoped view.
  # Notice we need to check for the request due to a bug in
  # Action Controller tests that forces _prefixes to be
  # loaded before even having a request object.
  #
  # This method should be public as it is in ActionPack
  # itself. Changing its visibility may break other gems.
  def _prefixes #:nodoc:
    @_prefixes ||= if self.class.scoped_views? && request && devise_mapping
      ['#{devise_mapping.scoped_path}/#{controller_name}'] + super
    else
      super
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          def mailer_reply_to(mapping)
        mailer_sender(mapping, :reply_to)
      end
    
      def perform
    eligible_users.reorder(nil).find_each do |user|
      next unless user.allows_digest_emails?
      DigestMailerWorker.perform_async(user.id)
    end
  end
    
      respond_to :json
    
            # @return [String] The label for the target.
        #
        attr_reader :cocoapods_target_label
    
        # Checks that the lockfile exists.
    #
    # @raise  If the lockfile does not exists.
    #
    # @return [void]
    #
    def verify_lockfile_exists!
      unless config.lockfile
        raise Informative, 'No `Podfile.lock' found in the project directory, run `pod install'.'
      end
    end
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
              states.flat_map do |state|
            send(state).sort.map do |pod|
              prefixes[state.to_sym] + ' #{pod}'
            end
          end
        end
      end
    end
  end
end

    
        def setup
      Sidekiq.redis {|c| c.flushdb }
    end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'pt')
    assert_equal 'pt', obj.locale
    
    describe Sidekiq::Manager do
  before do
    Sidekiq.redis {|c| c.flushdb }
  end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end