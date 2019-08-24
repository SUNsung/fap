
        
            context 'when user cannot update_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_group_member, presenter).and_return(false)
        allow(presenter).to receive(:can?).with(user, :override_group_member, presenter).and_return(false)
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
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          it { expect(module_node.body.send_type?).to be(true) }
    end
    
      describe '.new' do
    let(:source) do
      'class << self; end'
    end
    
            context 'when explicitly specified as toplevel constant' do
          let(:source) { '1.is_a?(::#{klass})' }
    
          # The name of the dispatched method as a symbol.
      #
      # @return [Symbol] the name of the dispatched method
      def method_name
        send_node.method_name
      end
    
        def self.directory
      @directory ||= Rails.env.development? ? 'https://acme-staging-v02.api.letsencrypt.org/directory' : 'https://acme-v02.api.letsencrypt.org/directory'
    end
    
      def organization
    @organization ||= current_user.organizations_scope.find_by_permalink!(params[:org_permalink])
  end
    
      def safe_params
    params.require(:ip_pool).permit(:name, :default)
  end
    
      private