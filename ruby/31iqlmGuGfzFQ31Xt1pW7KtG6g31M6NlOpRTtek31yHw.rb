
        
          before_action :set_account
  before_action :set_statuses
    
      def hub_topic_uri
    @_hub_topic_uri ||= Addressable::URI.parse(hub_topic).normalize
  end
    
        weeks
  end
    
        data.deep_merge!(data_params) if params[:data]
    
        define_method provider do
      @user = User.find_for_oauth(request.env['omniauth.auth'], current_user)
    
      def export_data
    raise 'Override in controller'
  end
    
      class Mention < ApplicationRecord
  end
    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)
    
        context 'on a post you partecipate to' do
      before { alice.participate! post }
    
        it 'redirects #create to the login page' do
      post :create, params: valid_params
      expect(flash[:error]).to eq(I18n.t('registrations.closed'))
      expect(response).to redirect_to new_user_session_path
    end
    
          it 'returns an array of reshares for a post' do
        bob.reshare!(@post)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to eq(@post.reshares.map(&:id))
      end
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Calls the given block for each `pair` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_pair
        return each_child_node(:pair).to_enum unless block_given?
    
          # Returns the body of the `when` node.
      #
      # @return [Node, nil] the body of the `when` node
      def body
        node_parts[-1]
      end
    end
  end
end

    
        rc_args = []
    
      public(:input, :output)
end # class FPM::Package::Dir

    
          scripts_path(filename).tap do |pkgscript|
        logger.info('Writing pkg script', :source => filename, :target => pkgscript)
        File.write(pkgscript, script(scriptname))
        # scripts are required to be executable
        File.chmod(0755, pkgscript)
      end
    end
  end # def write_scripts
    
        # Execute the transmogrification on the manifest
    pkg_mogrify = safesystemout('pkgmogrify', manifest_fn)
    File.write(build_path('#{name}.p5m.2'), pkg_mogrify)
    safesystem('cp', build_path('#{name}.p5m.2'), manifest_fn)
    
      # Helper for user lookup
  def uid2user(uid)
    begin
      pwent = Etc.getpwuid(uid)
      return pwent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find username for uid #{uid}')
      return uid.to_s
    end
  end # def uid2user
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end