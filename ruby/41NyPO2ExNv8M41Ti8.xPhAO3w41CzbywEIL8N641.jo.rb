
        
            def set_app_rating(v, options)
      return unless options[:app_rating_config_path]
    
          def setup
        # Since September 2015 we don't get the url any more, so we have to manually build it
        self.url = '#{HOST_URL}/#{self.asset_token}'
      end
    
          # This method will generate the required keys/values
      # for App Store Connect to validate the review attachment file
      def generate_review_attachment_file(review_attachment_data, review_attachment_file)
        {
          assetToken: review_attachment_data['token'],
          name: File.basename(review_attachment_file),
          fileType: Utilities.content_type(review_attachment_file),
          url: nil
        }
      end
    
        describe 'Upload screenshots', :screenshots do
      before do
        allow(Spaceship::UploadFile).to receive(:from_path) do |path|
          du_uploadimage_correct_screenshot if path == 'path_to_screenshot'
        end
      end
      let(:screenshot_path) { 'path_to_screenshot' }
    
      ['development', 'distribution'].each do |type|
    describe 'nuke #{type} option handling' do
      it 'can use the git_url short flag from tool options' do
        stub_commander_runner_args(['nuke', type, '-r', 'git@github.com:you/your_repo.git'])
    
            changelog = ''
    
          def self.available_options
        require 'match'
        Match::Options.available_options
      end
    
          def_node_matcher :extract_shared_values_key?, <<-PATTERN
        (const (const nil? :SharedValues) $_)
      PATTERN
    
          def self.is_supported?(platform)
        [:android].include?(platform)
      end
    
          def initialize(query, filter_opts = {}, &block)
        @raw_query = query.dup
        @filters = []
        @filter_options = { default_parser: :downcase.to_proc }.merge(filter_opts)
    
          context 'and user can admin_project_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :admin_project_member, project).and_return(true)
        end
    
            def clear_cache
          # No-op
        end
    
            desc 'Denies an access request for the given user.' do
          detail 'This feature was introduced in GitLab 8.11.'
        end
        params do
          requires :user_id, type: Integer, desc: 'The user ID of the access requester'
        end
        # rubocop: disable CodeReuse/ActiveRecord
        delete ':id/access_requests/:user_id' do
          source = find_source(source_type, params[:id])
          member = source.requesters.find_by!(user_id: params[:user_id])
    
            # Create a new deploy key
        deploy_key_attributes = declared_params.except(:can_push).merge(user: current_user)
        deploy_key_project = add_deploy_keys_project(user_project, deploy_key_attributes: deploy_key_attributes, can_push: !!params[:can_push])
    
      # Get the title for the page.
  #
  # @param [Middleman::Page] page
  #
  # @return [String]
  def title_for(page)
    if page && page.data.page_title
      return '#{page.data.page_title} - Vagrant by HashiCorp'
    end
    
          env[:box_url] = tf.path
    
            # Skip providers that can't be defaulted, unless they're in our
        # config, in which case someone made our decision for us.
        if !config.include?(key)
          next if popts.key?(:defaultable) && !popts[:defaultable]
        end
    
          # Load once so that we can get the proper box value
      config, config_warnings, config_errors = @loader.load(keys)
    
            before do
          allow(meta_file).to receive(:file?).and_return(true)
          allow(meta_file).to receive(:read).and_return(meta_file_content)
        end
    
      let(:platform)   { double('platform') }
    
      # This returns the path to the ~/.vagrant.d folder where Vagrant's
  # per-user state is stored.
  #
  # @return [Pathname]
  def self.user_data_path
    # Use user specified env var if available
    path = ENV['VAGRANT_HOME']
    
        private
    
        def tmux_window_name_option
      name ? '-n #{name}' : ''
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
          it 'defaults to 0' do
        expect(project.base_index).to eq 0
      end
    end
  end
    
      def attributes_match
    expect(@actual).to have_attributes(@expected_attrs)
  end
    
        it 'should generate a project file using the correct project file path' do
      file = StringIO.new
      allow(File).to receive(:open) { |&block| block.yield file }
      Dir.mktmpdir do |dir|
        path = '#{dir}/#{name}.yml'
        _ = described_class.new.generate_project_file(name, path)
        expect(file.string).to match %r{\A# #{path}$}
      end
    end
  end
    
        context 'both $XDG_CONFIG_HOME/tmuxinator and ~/.tmuxinator exist' do
      it 'is #xdg' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return true
        allow(described_class).to receive(:home?).and_return true
    
          it 'returns an empty Array' do
        expect(window.panes).to be_empty
      end
    end