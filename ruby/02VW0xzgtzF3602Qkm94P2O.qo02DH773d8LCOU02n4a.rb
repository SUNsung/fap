
        
          describe '#working' do
    before do
      @agent = agents(:jane_website_agent)
    end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
            it 'creates one event per file' do
          @checker.options['output'] = 'event_per_file'
          expect { @checker.receive([with_headers]) }.to change(Event, :count).by(1)
          expect(Event.last.payload).to eq(@checker.options['data_key'] => [{'one'=>'1', 'two'=>'2'}, {'one'=>'2', 'two'=>'3'}])
        end
      end
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Bind TCP Stager (RC4 Stage Encryption, Metasm)',
      'Description'   => 'Connect back to the attacker',
      'Author'        => ['hdm', 'skape', 'sf', 'mihi', 'max3raza', 'RageLtMan'],
      'License'       => MSF_LICENSE,
      'Platform'      => 'win',
      'Arch'          => ARCH_X64,
      'Handler'       => Msf::Handler::BindTcp,
      'Convention'    => 'sockrdi',
      'Stager'        => { 'RequiresMidstager' => false }
      ))
  end
end

    
      def read(data)
    require 'pdf-reader'
    
    class MetasploitModule < Msf::Exploit::Remote
  Rank = ManualRanking
    
        found_browser_path
  end
    
        report_note(host: host,
        type: 'host.persistance.cleanup',
        data: {
          local_id: session.sid,
          stype: session.type,
          desc: session.info,
          platform: session.platform,
          via_payload: session.via_payload,
          via_exploit: session.via_exploit,
          created_at: Time.now.utc,
          commands: @clean_up_rc
        })
  end
    
          def test_on_event_hash_return4
        ev = WIN32OLE_EVENT.new(@db)
        ev.on_event('WillConnect'){|*args|
          {'return' => 1, 'ConnectionString' => CONNSTR}
        }
        @db.connectionString = 'XXX'
        @db.open
        assert(true)
      end
    
    require 'racc/raccs'
    
        ScratchPad.recorded.should == [49, 50, 51, 52, 53, 97, 98, 99, 100, 101]
  end
    
        # Loops through the list of category pages and processes each one.
    def write_category_indexes
      if self.layouts.key? 'category_index'
        dir = self.config['category_dir'] || 'categories'
        self.categories.keys.each do |category|
          self.write_category_index(File.join(dir, category.to_url), category)
        end
    
    module Jekyll
    
      def safe_params
    params.require(:ip_pool).permit(:name, :default)
  end
    
      def create
    @smtp_endpoint = @server.smtp_endpoints.build(safe_params)
    if @smtp_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :smtp_endpoints]]
    else
      render_form_errors 'new', @smtp_endpoint
    end
  end