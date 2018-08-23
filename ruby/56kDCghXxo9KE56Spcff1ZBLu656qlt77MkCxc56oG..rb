
        
              def serialize(value)
        return if value.nil?
        unless default_value?(value)
          super coder.dump(value)
        end
      end
    
      def setup
    super
    @association_name = :autosaved_parrots
    @associated_model_name = :parrot
    @habtm = true
    
    class DependentFirm < Company
  has_one :account, foreign_key: 'firm_id', dependent: :nullify
  has_many :companies, foreign_key: 'client_of', dependent: :nullify
  has_one :company, foreign_key: 'client_of', dependent: :nullify
end
    
      test 'invalid action on Channel' do
    assert_logged('Unable to process ActionCable::Channel::BaseTest::ChatChannel#invalid_action') do
      @channel.perform_action 'action' => :invalid_action
    end
  end
    
      test 'disallow unknown args' do
    [ 'send_updates', Object.new, nil ].each do |invalid|
      e = assert_raise ArgumentError do
        ChatChannel.periodically invalid, every: 1
      end
      assert_match(/Expected a Symbol/, e.message)
    end
  end
    
        thread = server.run
    
          %w[subscribe unsubscribe].each do |method|
        pubsub_call = server.pubsub.class.class_variable_get '@@#{method}_called'
    
      private
    def open_connection
      env = Rack::MockRequest.env_for '/test',
        'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
      env['rack.hijack'] = -> { env['rack.hijack_io'] = StringIO.new }
    
          # Topic may be hard deleted due to spam, no point complaining
      # we would have to look at the topics table id sequence to find cases
      # where this was called with an invalid id, no point really
      return unless topic.present?
    
      def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
            key.revoke!
      end
    end
  end
end

    
          it 'does set the output directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(output_directory: '/tmp')
          end').runner.execute(:test)
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
    Liquid::Template.register_tag('gist', Jekyll::GistTag)
Liquid::Template.register_tag('gistnocache', Jekyll::GistTagNoCache)

    
    module Jekyll
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end