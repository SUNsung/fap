
        
            if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
        respond_to do |format|
      if @user_credential.save
        format.html { redirect_to user_credentials_path, notice: 'Your credential was successfully created.' }
        format.json { render json: @user_credential, status: :created, location: @user_credential }
      else
        format.html { render action: 'new' }
        format.json { render json: @user_credential.errors, status: :unprocessable_entity }
      end
    end
  end
    
        assert_equal('two', h1.delete(2))
    assert_equal(@cls[], h1)
    
    describe :string_unpack_float_le, shared: true do
  it 'decodes one float for a single format character' do
    '\x8f\xc2\xb5?'.unpack(unpack_format).should == [1.4199999570846558]
  end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
            # Remove it form the session objects so freeup
        sessions.delete(s[:session])
    
    # Sniffer class for GET URL's
class SnifferURL < BaseProtocolParser
  def register_sigs
    self.sigs = {
      :get		=> /^GET\s+([^\n]+)\s+HTTP\/\d\.\d/i,
      :webhost	=> /^HOST\:\s+([^\n\r]+)/i,
    }
  end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end