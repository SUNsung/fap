
        
            class InvertibleByPartsMigration < SilentMigration
      attr_writer :test
      def change
        create_table('new_horses') do |t|
          t.column :breed, :string
        end
        reversible do |dir|
          @test.yield :both
          dir.up    { @test.yield :up }
          dir.down  { @test.yield :down }
        end
        revert do
          create_table('horses') do |t|
            t.column :content, :text
            t.column :remind_at, :datetime
          end
        end
      end
    end
    
        car1 = car_class.find(1)
    car2 = car_class.find(2)
    
      def test_exception_on_create_bang_many_with_block
    assert_raise(ActiveRecord::RecordInvalid) do
      WrongReply.create!([{ 'title' => 'OK' }, { 'title' => 'Wrong Create' }]) do |r|
        r.content = nil
      end
    end
  end
    
              # Build up the paths that we need to listen to.
          paths = {}
          ignores = []
          with_target_vms(argv) do |machine|
            next if machine.state.id == :not_created
            cwd = machine.env.cwd.to_s
    
          context 'when local rsync version does not support --chown' do
        let(:rsync_local_version) { '2.0' }
    
          # Delete the directory
      directory.rmtree
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'if ((&knife --version) -Match \'15.0.0\'){ exit 0 } else { exit 1 }' }
    
          expect(subject.primary_machine_name).to eq(:default)
    end
    
          stime = Time.now.to_i
    
      def proxy_req(data, auth_cookie)
    target = 'https://127.0.0.1:7071#{normalize_uri(target_uri, '/service/admin/soap/AuthRequest')}'
    res = send_request_cgi({
      'method' => 'POST',
      'uri' => normalize_uri(target_uri, '/service/proxy/'),
      'vars_get' => {'target' => target},
      'cookie' => 'ZM_ADMIN_AUTH_TOKEN=#{auth_cookie}',
      'data' => data,
      'headers' => {'Host' => '#{datastore['RHOST']}:7071'}
    })
    fail_with(Failure::Unknown, 'Request failed') unless res && res.code == 200
    res
  end
    
    end
end
end

    
              res
        end
    
        # use Feedbag as a backup to Google Feeds Api
    if rss_url.nil?
      rss_url = Feedbag.find(web_url).first
      if rss_url.nil?
        suggested_paths = ['/rss', '/feed', '/feeds', '/atom.xml', '/feed.xml', '/rss.xml', '.atom']
        suggested_paths.each do |suggested_path|
          rss_url = Feedbag.find('#{web_url.chomp('/')}#{suggested_path}').first
          break if rss_url
        end
      end
    end
  end
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
          def has_footer
        @footer = (@page.footer || false) if @footer.nil? && @page
        !!@footer
      end
    
    def normal(text)
  text.gsub!(' ', '')
  text.gsub!('\n', '')
  text
end
    
      test 'accessing non-existant directory redirects to create index page' do
    get '/foo/'
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
        class MapGollum
      def initialize(base_path)
        @mg = Rack::Builder.new do
          
          map '/#{base_path}' do
            run Precious::App
          end
          map '/' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          map '/*' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          
        end
      end
    
        def stop(name)
      params = {
        name: name
      }
      show_version_warning if version_warning?(
        options['suppress-tmux-version-warning']
      )
    
        context 'no deprecations' do
      it 'starts the project if given a valid project config file' do
        ARGV.replace(['start', '--project-config=#{project_config}'])
        expect(Kernel).to receive(:exec)
        capture_io { cli.start }
      end