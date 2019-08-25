
        
            it 'should return the file when s3 cdn enabled' do
      SiteSetting.s3_cdn_url = 'https://cdn.s3.amazonaws.com'
      stub_request(:get, Discourse.store.cdn_url(upload_s3.url)).to_return(status: 200, body: 'Hello world')
    
        def handle_bounce(e)
      # never reply to bounced emails
      log_email_process_failure(@mail, e)
      set_incoming_email_rejection_message(@receiver.incoming_email, I18n.t('emails.incoming.errors.bounced_email_error'))
    end
    
    require 'rails_helper'
require 'theme_store/git_importer'
    
      def personal_messages
    guardian.ensure_can_tag_pms!
    allowed_user = fetch_user_from_params
    raise Discourse::NotFound if allowed_user.blank?
    raise Discourse::NotFound if current_user.id != allowed_user.id && !@guardian.is_admin?
    pm_tags = Tag.pm_tags(guardian: guardian, allowed_user: allowed_user)
    
            test_multisite_connection('second') do
          upload = build_upload
          expect(store.store_upload(uploaded_file, upload)).to eq(
            '//#{SiteSetting.s3_upload_bucket}.s3.dualstack.us-east-1.amazonaws.com/uploads/second/original/1X/c530c06cf89c410c0355d7852644a73fc3ec8c04.png'
          )
          expect(upload.etag).to eq('ETag')
        end
      end
    end
  end
    
      system('yarn install --dev')
    
      # Get the title for the page.
  #
  # @param [Middleman::Page] page
  #
  # @return [String]
  def title_for(page)
    if page && page.data.page_title
      return '#{page.data.page_title} - Vagrant by HashiCorp'
    end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
  let(:communicator) { VagrantTests::DummyCommunicator::Communicator.new(machine) }
  let(:config)  { double('config') }
    
        # Initializes by loading a Vagrantfile.
    #
    # @param [Config::Loader] loader Configuration loader that should
    #   already be configured with the proper Vagrantfile locations.
    #   This usually comes from {Vagrant::Environment}
    # @param [Array<Symbol>] keys The Vagrantfiles to load and the
    #   order to load them in (keys within the loader).
    def initialize(loader, keys)
      @keys   = keys
      @loader = loader
      @config, _ = loader.load(keys)
      @logger = Log4r::Logger.new('vagrant::vagrantfile')
    end
    
          expect { subject.usable?(true) }.
        to raise_error(Vagrant::Errors::VirtualBoxInvalidVersion)
    end
  end
    
        context 'when extra_args is provided as a string' do
      let(:ssh_info) {{
        host: 'localhost',
        port: 2222,
        username: 'vagrant',
        private_key_path: [private_key_path],
        extra_args: '-6'
      }}
    
        # Enable Vagrant environment specific plugins at given data path
    #
    # @param [Pathname] Path to Vagrant::Environment data directory
    # @return [Pathname] Path to environment specific gem directory
    def environment_path=(env_data_path)
      @env_plugin_gem_path = env_data_path.join('plugins', 'gems', RUBY_VERSION).freeze
    end
    
            entries = []
        prune   = []
        @env.machine_index.each do |entry|
          # If we're pruning and this entry is invalid, skip it
          # and prune it later.
          if options[:prune] && !entry.valid?(@env.home_path)
            prune << entry
            next
          end
    
        before do
      iso_env.machine_index.set(new_entry('foo'))
      iso_env.machine_index.set(new_entry('bar'))
      allow($stdout).to receive(:puts)
    end
    
      describe '#flare_tag_hash' do
    let(:tag) { create(:tag, name: 'ama', bg_color_hex: '#f3f3f3', text_color_hex: '#cccccc') }
    let(:valid_article) { create(:article, tags: tag.name) }
    
        it 'denies chat channel invitation to non-authorized user' do
      expect do
        post '/chat_channel_memberships', params: {
          chat_channel_membership: {
            user_id: second_user.id, chat_channel_id: chat_channel.id
          }
        }
      end.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
      def facebook_post!
    BufferUpdate.buff!(@article.id, fb_buffer_text, ApplicationConfig['BUFFER_FACEBOOK_ID'], 'facebook')
    BufferUpdate.buff!(@article.id, fb_buffer_text, ApplicationConfig['BUFFER_LINKEDIN_ID'], 'linkedin')
    @article.update(facebook_last_buffered: Time.current)
  end
    
          now = Time.current
      @user.onboarding_package_requested_again = true if @user.onboarding_package_requested
      @user.onboarding_package_requested = true
      @user.onboarding_package_form_submmitted_at = now
      @user.personal_data_updated_at = now
      @user.shipping_validated_at = now if user_params[:shipping_validated] == '1'
      if @user.save!
        format.html { redirect_to '/freestickers/edit' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end