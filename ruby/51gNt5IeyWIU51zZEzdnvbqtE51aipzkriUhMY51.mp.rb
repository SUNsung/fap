
        
            remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
        it 'returns an empty array for a post with no likes' do
      get :index, params: {post_id: @message.id}
      expect(JSON.parse(response.body)).to eq([])
    end
    
        it 'supports a limit per_page parameter' do
      2.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index, params: {per_page: 2}
      expect(assigns[:notifications].count).to eq(2)
    end
    
      describe '#destroy' do
    let(:post) { FactoryGirl.create(:status_message) }
    
      describe '#create' do
    it 'redirects to /stream for a non-mobile user' do
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
    
      opts.on('-r', '--redis [HOST:PORT]', 'Redis connection string') do |host|
    Resque.redis = host
  end
    
    # Here's our ActiveRecord class
class Repository < ActiveRecord::Base
  # This will be called by a worker when a job needs to be processed
  def self.perform(id, method, *args)
    find(id).send(method, *args)
  end
    
          # When a job fails, a new instance of your Failure backend is created
      # and #save is called.
      #
      # This is where you POST or PUT or whatever to your Failure service.
      def save
      end
    
          def self.count(queue = nil, class_name = nil)
        if queue
          if class_name
            n = 0
            each(0, count(queue), queue, class_name) { n += 1 }
            n
          else
            data_store.num_failed(queue).to_i
          end
        else
          total = 0
          queues.each { |q| total += count(q) }
          total
        end
      end
    
          failure_hooks(plugin).each do |hook|
        if hook.to_s.end_with?('failure')
          raise LintError, '#{plugin}.#{hook} is not namespaced'
        end
      end
    end
    
      def failed_size
    @failed_size ||= Resque::Failure.count(params[:queue], params[:class])
  end
    
      def assert_exception_caught(result)
    refute_nil result
    assert !result.start_with?('Finished Normally'), 'Job Finished normally.  (sleep parameter to LongRunningJob not long enough?)'
    assert result.start_with?('Caught TermException'), 'TermException exception not raised in child.'
  end