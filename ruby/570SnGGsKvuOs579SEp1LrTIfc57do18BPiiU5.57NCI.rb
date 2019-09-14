
        
              it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
      describe '#working?' do
    it 'it is working when at least one event was emitted' do
      expect(@checker).not_to be_working
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      @checker.check
      expect(@checker.reload).to be_working
    end
  end
end

    
          it 'accepts multiple rows per event' do
        event = Event.new(payload: { 'data' => [{'key' => 'value', 'key2' => 'value2', 'key3' => 'value3'}, {'key' => '2value', 'key2' => '2value2', 'key3' => '2value3'}] })
        expect { @checker.receive([event])}.to change(Event, :count).by(1)
        expect(Event.last.payload).to eq('data' => '\'key\',\'key2\',\'key3\'\n\'value\',\'value2\',\'value3\'\n\'2value\',\'2value2\',\'2value3\'\n')
      end
    
      describe 'follow_request' do
    let(:follow_request) { Fabricate(:follow_request, account: sender, target_account: receiver.account) }
    let(:mail) { NotificationMailer.follow_request(receiver.account, Notification.create!(account: receiver.account, activity: follow_request)) }
    
          let(:object_json) do
        ActivityPub::TagManager.instance.uri_for(status)
      end
    
    
class ScanError < StandardError; end
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    
      before :each do
    @data = '{'a':1234}'
    @zip = [31, 139, 8, 0, 0, 0, 0, 0, 0, 3, 171, 86, 74, 84, 178, 50,
            52, 50, 54, 169, 5, 0, 196, 20, 118, 213, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
          def use_identicon
        @page.wiki.user_icons == 'identicon'
      end
    
          def has_path
        !@path.nil?
      end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
      test 'creates korean page which contains korean content' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
  end