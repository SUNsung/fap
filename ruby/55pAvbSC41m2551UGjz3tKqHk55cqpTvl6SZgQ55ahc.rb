
        
              importer = ThemeStore::GitImporter.new(url, branch: branch)
      importer.import!
    end
    
      context 'when plugin registered fallback locale' do
    before do
      DiscoursePluginRegistry.register_locale('es_MX', fallbackLocale: 'es')
      DiscoursePluginRegistry.register_locale('de_AT', fallbackLocale: 'de')
    end
    
      describe '.get' do
    before do
      settings.setting(:title, 'Discourse v1')
      settings.refresh!
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
          context '#run_workers' do
        it 'runs all the workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
        end
    
        it 'should work' do
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
          it 'does not write the headers when with_header is false' do
        @checker.options['with_header'] = 'false'
        event = Event.new(payload: { 'data' => {'key' => 'value', 'key2' => 'value2', 'key3' => 'value3'} })
        expect { @checker.receive([event])}.to change(Event, :count).by(1)
        expect(Event.last.payload).to eq('data' => '\'value\',\'value2\',\'value3\'\n')
      end
    
    
    {        # Start a new thread and pass the client connection
        # as the input and output pipe.  Client's are expected
        # to implement the Stream interface.
        conn_threads << framework.threads.spawn('BindUdpHandlerSession', false, client) { |client_copy|
          begin
            handle_connection(client_copy, opts)
          rescue
            elog('Exception raised from BindUdp.handle_connection: #{$!}')
          end
        }
      else
        wlog('No connection received before the handler completed')
      end
    }
  end
    
        # PHP escapes quotes by default with magic_quotes_gpc, so we use some
    # tricks to get around using them.
    #
    # The raw, unquoted base64 without the terminating equals works because
    # PHP treats it like a string.  There are, however, a couple of caveats
    # because first, PHP tries to parse the bare string as a constant.
    # Because of this, the string is limited to things that can be
    # identifiers, i.e., things that start with [a-zA-Z] and contain only
    # [a-zA-Z0-9_].  Also, for payloads that encode to more than 998
    # characters, only part of the payload gets unencoded on the victim,
    # presumably due to a limitation in PHP identifier name lengths, so we
    # break the encoded payload into roughly 900-byte chunks.
    #
    # https://wiki.php.net/rfc/deprecate-bareword-strings
    
      # Run Method for when run command is issued
  def run
    unless is_root?
      fail_with(Failure::BadConfig, 'Insufficient Privileges: must be running as root to dump the hashes')
    end
    
      # List of known values and models
  def devices_list
    known_devices = {
        :'AZ-D140W'=>
            {:name=>'Azmoon', :model=>'AZ-D140W', :values=>[
                [107367693, 13]
            ]},
        :'BiPAC 5102S'=>
            {:name=>'Billion', :model=>'BiPAC 5102S', :values=>[
                [107369694, 13]
            ]},
        :'BiPAC 5200'=>
            {:name=>'Billion', :model=>'BiPAC 5200', :values=>[
                [107369545, 9],
                [107371218, 21]
            ]},
        :'BiPAC 5200A'=>
            {:name=>'Billion', :model=>'BiPAC 5200A', :values=>[
                [107366366, 25],
                [107371453, 9]
            ]},
        :'BiPAC 5200GR4'=>
            {:name=>'Billion', :model=>'BiPAC 5200GR4', :values=>[
                [107367690, 21]
            ]},
        :'BiPAC 5200SRD'=>
            {:name=>'Billion', :model=>'BiPAC 5200SRD', :values=>[
                [107368270, 1],
                [107371378, 3],
                [107371218, 13]
            ]},
        :'DSL-2520U'=>
            {:name=>'D-Link', :model=>'DSL-2520U', :values=>[
                [107368902, 25]
            ]},
        :'DSL-2600U'=>
            {:name=>'D-Link', :model=>'DSL-2600U', :values=>[
                [107366496, 13],
                [107360133, 20]
            ]},
        :'TD-8616'=>
            {:name=> 'TP-Link', :model=>'TD-8616', :values=>[
                [107371483, 21],
                [107369790, 17],
                [107371161, 1],
                [107371426, 17],
                [107370211, 5],
            ]},
        :'TD-8817'=>
            {:name=> 'TP-Link', :model=>'TD-8817', :values=>[
                [107369790, 17],
                [107369788, 1],
                [107369522, 25],
                [107369316, 21],
                [107369321, 9],
                [107351277, 20]
            ]},
        :'TD-8820'=>
            {:name=>'TP-Link', :model=>'TD-8820', :values=>[
                [107369768, 17]
            ]},
        :'TD-8840T'=>
            {:name=>'TP-Link', :model=>'TD-8840T', :values=>[
                [107369845, 5],
                [107369790, 17],
                [107369570, 1],
                [107369766, 1],
                [107369764, 5],
                [107369688, 17]
            ]},
        :'TD-W8101G'=>
            {:name=>'TP-Link', :model=>'TD-W8101G', :values=>[
                [107367772, 37],
                [107367808, 21],
                [107367751, 21],
                [107367749, 13],
                [107367765, 25],
                [107367052, 25],
                [107365835, 1]
            ]},
        :'TD-W8151N'=>
            {:name=>'TP-Link', :model=>'TD-W8151N', :values=>[
                [107353867, 24]
            ]},
        :'TD-W8901G'=>
            {:name=> 'TP-Link', :model=>'TD-W8901G', :values=>[
                [107367787, 21],
                [107368013, 5],
                [107367854, 9],
                [107367751, 21],
                [107367749, 13],
                [107367765, 25],
                [107367682, 21],
                [107365835, 1],
                [107367052, 25]
            ]},
        :'TD-W8901GB'=>
            {:name=>'TP-Link', :model=>'TD-W8901GB', :values=>[
                [107367756, 13],
                [107369393, 21]
            ]},
        :'TD-W8901N'=>
            {:name=>'TP-Link', :model=>'TD-W8901N', :values=>[
                [107353880, 0]
            ]},
        :'TD-W8951ND'=>
            {:name=>'TP-Link', :model=>'TD-W8951ND', :values=>[
                [107369839, 25],
                [107369876, 13],
                [107366743, 21],
                [107364759, 25],
                [107364759, 13],
                [107364760, 21]
            ]},
        :'TD-W8961NB'=>
            {:name=>'TP-Link', :model=>'TD-W8961NB', :values=>[
                [107369844, 17],
                [107367629, 21],
                [107366421, 13]
            ]},
        :'TD-W8961ND'=>
            {:name=>'TP-Link', :model=>'TD-W8961ND', :values=>[
                [107369839, 25],
                [107369876, 13],
                [107364732, 25],
                [107364771, 37],
                [107364762, 29],
                [107353880, 0],
                [107353414, 36]
            ]},
        :'P-660R-T3 v3'=> #This value works on devices with model P-660R-T3 v3 not P-660R-T3 v3s
            {:name=>'ZyXEL', :model=>'P-660R-T3', :values=>[
                [107369567, 21]
            ]},
        :'P-660RU-T3 v2'=> #Couldn't verify this
            {:name=>'ZyXEL', :model=>'P-660R-T3', :values=>[
                [107369567, 21]
            ]},
        :'ALL'=> # Used when `ForceAttempt` === true
            {:name=>'Unknown', :model=>'Forced', :values=>[]
            },
    }
    # collect all known cookies for a brute force option
    all_cookies = []
    known_devices.collect { |_, v| v[:values] }.each do |list|
      all_cookies += list
    end
    known_devices[:'ALL'][:values] = all_cookies.uniq
    known_devices
  end
    
        uuid ||= generate_payload_uuid
    uri  = generate_uri_uuid(sum, uuid, len)
    record_payload_uuid_url(uuid, uri)
    
    def BigDecimal.new(*args, **kwargs)
  return BigDecimal(*args) if kwargs.empty?
  BigDecimal(*args, **kwargs)
end
# Remove bigdecimal warning - end
    
      def webcam_get_frame(quality)
    request = Packet.create_request('webcam_get_frame')
    request.add_tlv(TLV_TYPE_WEBCAM_QUALITY, quality)
    response = client.send_request(request)
    response.get_tlv(TLV_TYPE_WEBCAM_IMAGE).value
  end
    
      #
  # Invoke the kerberos ticket listing functionality on the target machine.
  #
  def cmd_kerberos_ticket_list(*args)
    if args.include?('-h')
      kerberos_ticket_list_usage
      return
    end
    
        def test_send_leak_symbol_no_optimization
      assert_no_immortal_symbol_in_method_missing('sym slow') do |name|
        42.method(:send).call(name.to_sym)
      end
    end
    
        def call(*args)
      import = @proto.split('')
      args.each_with_index do |x, i|
        args[i], = [x == 0 ? nil : x].pack('p').unpack(POINTER_TYPE) if import[i] == 'S'
        args[i], = [x].pack('I').unpack('i') if import[i] == 'I'
      end
      ret, = @func.call(*args)
      return ret || 0
    end
  end
    
      it 'returns nil at the end of the stream' do
    gz = Zlib::GzipReader.new @io
    gz.read
    pos = gz.pos
    gz.getc.should be_nil
    gz.pos.should == pos
  end
    
            expect(new_source).to eq(<<~RUBY)
          some_method #{open}
    
          it 'registers an offense if no method is defined' do
        src = <<~RUBY
          class << A
            #{modifier}
          end
        RUBY
        inspect_source(src)
        expect(cop.offenses.size).to eq(1)
      end
    
          it 'does auto-correction' do
        corrected = autocorrect_source(source)
        expect(corrected).to eq(<<~RUBY)
          foo def a
            a1
          end
    
          it 'corrects each to for and uses _ as the item' do
        new_source = autocorrect_source(<<~RUBY)
          def func
            [1, 2, 3].each do
              something
            end
          end
        RUBY
    
    
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    end
  end
end

    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end
    
        # returns the formatted price for the specified variant as a difference from product price
    def variant_price_diff(variant)
      variant_amount = variant.amount_in(current_currency)
      product_amount = variant.product.amount_in(current_currency)
      return if variant_amount == product_amount || product_amount.nil?
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end
    
            def create
          authorize! :create, Spree.user_class
          @user = Spree.user_class.new(user_params)
          if @user.save
            respond_with(@user, status: 201, default_template: :show)
          else
            invalid_resource!(@user)
          end
        end
    
                def scope
              spree_current_user.credit_cards.accessible_by(current_ability, :show)
            end
          end
        end
      end
    end
  end
end

    
        FileUtils::mv(temporary_target_path, target_path)
  end
    
      option '--identifier-prefix', 'IDENTIFIER_PREFIX',
    'Reverse domain prefix prepended to package identifier, ' \
    'ie. 'org.great.my'. If this is omitted, the identifer ' \
    'will be the package name.'
  option '--payload-free', :flag, 'Define no payload, assumes use of script options.',
    :default => false
  option '--ownership', 'OWNERSHIP',
    '--ownership option passed to pkgbuild. Defaults to 'recommended'. ' \
    'See pkgbuild(1).', :default => 'recommended' do |value|
    if !OWNERSHIP_OPTIONS.include?(value)
      raise ArgumentError, 'osxpkg-ownership value of '#{value}' is invalid. ' \
        'Must be one of #{OWNERSHIP_OPTIONS.join(', ')}'
    end
    value
  end
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end
    
        if attributes[:python_pip].nil?
      # no pip, use easy_install
      logger.debug('no pip, defaulting to easy_install', :easy_install => attributes[:python_easyinstall])
      safesystem(attributes[:python_easyinstall], '-i',
                 attributes[:python_pypi], '--editable', '-U',
                 '--build-directory', target, want_pkg)
    else
      logger.debug('using pip', :pip => attributes[:python_pip])
      # TODO: Support older versions of pip
      safesystem(attributes[:python_pip], 'download', '--no-clean', '--no-deps', '--no-binary', ':all:', '-i', attributes[:python_pypi], '--build', target,  want_pkg)
    end