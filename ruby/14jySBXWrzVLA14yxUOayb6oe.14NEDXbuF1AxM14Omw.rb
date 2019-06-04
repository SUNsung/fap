
        
                end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
        it 'should work with the human task agent' do
      valid_params = {
        'expected_receive_period_in_days' => 2,
        'trigger_on' => 'event',
        'hit' =>
          {
            'assignments' => 1,
            'title' => 'Sentiment evaluation',
            'description' => 'Please rate the sentiment of this message: '<$.message>'',
            'reward' => 0.05,
            'lifetime_in_seconds' => 24 * 60 * 60,
            'questions' =>
              [
                {
                  'type' => 'selection',
                  'key' => 'sentiment',
                  'name' => 'Sentiment',
                  'required' => 'true',
                  'question' => 'Please select the best sentiment value:',
                  'selections' =>
                    [
                      { 'key' => 'happy', 'text' => 'Happy' },
                      { 'key' => 'sad', 'text' => 'Sad' },
                      { 'key' => 'neutral', 'text' => 'Neutral' }
                    ]
                },
                {
                  'type' => 'free_text',
                  'key' => 'feedback',
                  'name' => 'Have any feedback for us?',
                  'required' => 'false',
                  'question' => 'Feedback',
                  'default' => 'Type here...',
                  'min_length' => '2',
                  'max_length' => '2000'
                }
              ]
          }
      }
      @agent = Agents::HumanTaskAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options['hit']['description']).to eq('Please rate the sentiment of this message: '{{message}}'')
    end
  end
end
    
      before(:each) do
    stub_request(:get, /events.json$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /projects.json$/).to_return(
      :body => JSON.dump([{name: 'test', id: 1234},{name: 'test1', id: 1235}]),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /02:00$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    @valid_params = { :project_id => 6789 }
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
      before_action :set_account
  respond_to :txt
    
    class Api::Web::SettingsController < Api::Web::BaseController
  respond_to :json
    
      private
    
      def apply_header_remaining
    response.headers['X-RateLimit-Remaining'] = rate_limit_remaining
  end
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
        it 'should redirect back in the html version if it has > 0 notifications' do
      FactoryGirl.create(:notification, recipient: alice, type: 'Notifications::StartedSharing')
      get :read_all, params: {type: 'liked'}, format: :html
      expect(response).to redirect_to(notifications_path)
    end
    
          class << self
        attr_reader :processed_source, :comments_as_separators
    
                  add_offense(
                node, location: arguments[i].source_range, message: message
              )
            end
          end
        end
    
      def permitted_attributes_for_create
    %i[body_markdown commentable_id commentable_type parent_id]
  end
    
    # This stuff needs to be run after Paperclip is defined.
require 'paperclip/io_adapters/registry'
require 'paperclip/io_adapters/abstract_adapter'
require 'paperclip/io_adapters/empty_string_adapter'
require 'paperclip/io_adapters/identity_adapter'
require 'paperclip/io_adapters/file_adapter'
require 'paperclip/io_adapters/stringio_adapter'
require 'paperclip/io_adapters/data_uri_adapter'
require 'paperclip/io_adapters/nil_adapter'
require 'paperclip/io_adapters/attachment_adapter'
require 'paperclip/io_adapters/uploaded_file_adapter'
require 'paperclip/io_adapters/uri_adapter'
require 'paperclip/io_adapters/http_url_proxy_adapter'

    
        alias :empty? :empty_file?
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end
    
    describe 'modular-scale' do
  before(:all) do
    ParserSupport.parse_file('library/modular-scale')
  end
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      rule = 'padding: 7px 8px 9px 10px'