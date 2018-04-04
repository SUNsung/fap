
        
              raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
        def to_json
      JSON.generate(as_json)
    end
    
            css('.toplang', '#quickview', '.top').remove
    
          def get_type
        name
      end
    
          def collect_rows(records)
        records.map do |rec|
          Row.new.tap { |row| yield(rec, row) }
        end
      end
    
      it 'overrides the rake method, and sets the sshkit_backend to SSHKit::Backend::Printer' do
    capture_io do
      flags '--dry-run', '-n'
    end
    sshkit_backend = Capistrano::Configuration.fetch(:sshkit_backend)
    expect(sshkit_backend).to eq(SSHKit::Backend::Printer)
  end