
        
          end
    
          key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
        def self.git_log_last_commits(pretty_format, commit_count, merge_commit_filtering, date_format = nil, ancestry_path)
      command = ['git log']
      command << '--pretty=\'#{pretty_format}\''
      command << '--date=\'#{date_format}\'' if date_format
      command << '--ancestry-path' if ancestry_path
      command << '-n #{commit_count}'
      command << git_log_merge_commit_filtering_option(merge_commit_filtering)
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
            if params[:name]
          escaped_name = params[:name].shellescape
          keychain_path = '~/Library/Keychains/#{escaped_name}'
        else
          keychain_path = params[:path].shellescape
        end
    
        context 'minimal configuration' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' }
        }
      end
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(220\s*[^\r\n]+)/i,
      :user		=> /^USER\s+([^\s]+)/i,
      :pass		=> /^PASS\s+([^\s]+)/i,
      :login_pass => /^(230\s*[^\n]+)/i,
      :login_fail => /^(5\d\d\s*[^\n]+)/i,
      :bye      => /^221/
    }
  end
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
    
# extract label addresses
addrs = {}
dtrans.each_line { |ln|
	if ln =~ /;[^ ].*:/
		parts = ln.split(' ')
		label = parts[1]
		label = label.slice(1,label.index(':')-1)
		addr = parts[0].split(':')[1].to_i(16)
		#puts '%s => %x' % [label, addr]
		one = { label => addr }
		addrs.merge!(one)
	end
}
#puts addrs.inspect
    
    describe 'modular-scale' do
  before(:all) do
    ParserSupport.parse_file('library/modular-scale')
  end
    
      context 'called with one prefix' do
    it 'applies the prefix to the property' do
      rule = '-webkit-appearance: none; ' +
             'appearance: none;'
    
        @inputs_list = %w(
      [type='color']
      [type='date']
      [type='datetime']
      [type='datetime-local']
      [type='email']
      [type='month']
      [type='number']
      [type='password']
      [type='search']
      [type='tel']
      [type='text']
      [type='time']
      [type='url']
      [type='week']
      input:not([type])
      textarea
    )
  end