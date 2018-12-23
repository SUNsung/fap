
        
            expect(page).to have_text('Test Trigger Agent')
  end
    
        it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
      describe '#interpolate_jsonpaths' do
    let(:payload) { { :there => { :world => 'WORLD' }, :works => 'should work' } }
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end
    
          it 'does not create a user' do
        expect { get :create, params: invalid_params }.not_to change(User, :count)
      end
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          whitelist = (@imported.dup << loc[0]).map { |f| File.absolute_path(f, loc[1]) }
      /^(?!#{whitelist.map { |p| Regexp.quote(p) }.join('|')})/
    end