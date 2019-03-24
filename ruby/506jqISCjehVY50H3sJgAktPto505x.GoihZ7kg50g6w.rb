
        
          protected
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
        # The hook which is called inside devise.
    # So your ORM can include devise compatibility stuff.
    def devise_modules_hook!
      yield
    end
  end
end
    
      def up
    Photo.joins('INNER JOIN posts ON posts.guid = photos.status_message_guid')
         .where(posts: {type: 'StatusMessage', public: true}).update_all(public: true)
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
        it 'succeeds' do
      get :index
      expect(response).to be_success
      expect(assigns[:notifications].count).to eq(1)
    end
    
        context 'on a post you do not partecipate to' do
      it 'says it is an unprocessable request' do
        delete :destroy, params: {post_id: post.id}
        expect(response.code).to eq('422')
      end
    end
  end
end

    
          it 'does not create a user' do
        expect { get :create, params: invalid_params }.not_to change(User, :count)
      end
    
          it 'federates' do
        allow_any_instance_of(Participation::Generator).to receive(:create!)
        expect(Diaspora::Federation::Dispatcher).to receive(:defer_dispatch)
        post_request!
      end
    
          def author
        first = page.last_version
        return DEFAULT_AUTHOR unless first
        first.author.name.respond_to?(:force_encoding) ? first.author.name.force_encoding('UTF-8') : first.author.name
      end
    
      s.summary     = 'A simple, Git-powered wiki.'
  s.description = 'A simple, Git-powered wiki with a sweet API and local frontend.'