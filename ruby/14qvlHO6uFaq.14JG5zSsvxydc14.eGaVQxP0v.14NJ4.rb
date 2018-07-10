
        
          attr_accessor :output_buffer
  attr_reader :request
    
            routes &&
          (routes.named_routes.route_defined?(name) ||
           routes.mounted_helpers.method_defined?(name))
      end
    end
    
        orig = Topic.new(content: { foo: :bar })
    clone = orig.dup
    assert_equal(orig.content, clone.content)
  end
    
    module Web
  class Reply < Web::Topic
    belongs_to :topic, foreign_key: 'parent_id', counter_cache: true, class_name: 'Web::Topic'
  end
end

    
        # Block arg
    periodically every: 3 do
      ping
    end
    
        assert subscriptions.verify
  end
end

    
            assert_equal 1, connection.transmissions.size
      end
    end
  end
    
        def connect
      @connected = true
    end
    
      class FakeConnection
    def close
    end
  end
    
        describe '#revoke!' do
      it 'revokes the key with the client' do
        mock_client_response(:revoke_key!)
    
        # Returns the current git branch - can be replaced using the environment variable `GIT_BRANCH`
    def self.git_branch
      return ENV['GIT_BRANCH'] if ENV['GIT_BRANCH'].to_s.length > 0 # set by Jenkins
      s = Actions.sh('git rev-parse --abbrev-ref HEAD', log: false).chomp
      return s.to_s.strip if s.to_s.length > 0
      nil
    rescue
      nil
    end
    
          it 'it increments all targets patch version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number
        end').runner.execute(:test)
    
      def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        uses = formulae.select do |f|
      used_formulae.all? do |ff|
        begin
          deps = f.runtime_dependencies if only_installed_arg
          deps ||= if recursive
            recursive_includes(Dependency, f, includes, ignores)
          else
            reject_ignores(f.deps, ignores, includes)
          end
    
        SPREE_GEMS.each do |gem_name|
      Dir.chdir(gem_name) do
        sh 'gem build spree_#{gem_name}.gemspec'
        mv 'spree_#{gem_name}-#{version}.gem', pkgdir
      end
    end
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end