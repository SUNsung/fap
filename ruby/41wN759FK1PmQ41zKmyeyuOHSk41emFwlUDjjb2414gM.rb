
        
          def test_pretty_print_new
    topic = Topic.new
    actual = +''
    PP.pp(topic, StringIO.new(actual))
    expected = <<~PRETTY
      #<Topic:0xXXXXXX
       id: nil,
       title: nil,
       author_name: nil,
       author_email_address: 'test@test.com',
       written_on: nil,
       bonus_time: nil,
       last_read: nil,
       content: nil,
       important: nil,
       approved: true,
       replies_count: 0,
       unique_replies_count: 0,
       parent_id: nil,
       parent_title: nil,
       type: nil,
       group: nil,
       created_at: nil,
       updated_at: nil>
    PRETTY
    assert actual.start_with?(expected.split('XXXXXX').first)
    assert actual.end_with?(expected.split('XXXXXX').last)
  end
    
        wheel = wheel_class.create!(wheelable: car1)
    
        assert_equal <<~MESSAGE, run_routes_command
                                     Prefix Verb   URI Pattern                                                                              Controller#Action
              rails_mandrill_inbound_emails POST   /rails/action_mailbox/mandrill/inbound_emails(.:format)                                  action_mailbox/ingresses/mandrill/inbound_emails#create
              rails_postmark_inbound_emails POST   /rails/action_mailbox/postmark/inbound_emails(.:format)                                  action_mailbox/ingresses/postmark/inbound_emails#create
                 rails_relay_inbound_emails POST   /rails/action_mailbox/relay/inbound_emails(.:format)                                     action_mailbox/ingresses/relay/inbound_emails#create
              rails_sendgrid_inbound_emails POST   /rails/action_mailbox/sendgrid/inbound_emails(.:format)                                  action_mailbox/ingresses/sendgrid/inbound_emails#create
               rails_mailgun_inbound_emails POST   /rails/action_mailbox/mailgun/inbound_emails/mime(.:format)                              action_mailbox/ingresses/mailgun/inbound_emails#create
             rails_conductor_inbound_emails GET    /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#index
                                            POST   /rails/conductor/action_mailbox/inbound_emails(.:format)                                 rails/conductor/action_mailbox/inbound_emails#create
          new_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/new(.:format)                             rails/conductor/action_mailbox/inbound_emails#new
         edit_rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id/edit(.:format)                        rails/conductor/action_mailbox/inbound_emails#edit
              rails_conductor_inbound_email GET    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#show
                                            PATCH  /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                            PUT    /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#update
                                            DELETE /rails/conductor/action_mailbox/inbound_emails/:id(.:format)                             rails/conductor/action_mailbox/inbound_emails#destroy
      rails_conductor_inbound_email_reroute POST   /rails/conductor/action_mailbox/:inbound_email_id/reroute(.:format)                      rails/conductor/action_mailbox/reroutes#create
                         rails_service_blob GET    /rails/active_storage/blobs/:signed_id/*filename(.:format)                               active_storage/blobs#show
                  rails_blob_representation GET    /rails/active_storage/representations/:signed_blob_id/:variation_key/*filename(.:format) active_storage/representations#show
                         rails_disk_service GET    /rails/active_storage/disk/:encoded_key/*filename(.:format)                              active_storage/disk#show
                  update_rails_disk_service PUT    /rails/active_storage/disk/:encoded_token(.:format)                                      active_storage/disk#update
                       rails_direct_uploads POST   /rails/active_storage/direct_uploads(.:format)                                           active_storage/direct_uploads#create
    MESSAGE
  end
    
      def test_cmd_exec_quotes
    vprint_status('Starting cmd_exec quote tests')
    
      # Record from default audio source for +duration+ seconds;
  # returns a low-quality wav file
  def record_mic(duration)
    request = Packet.create_request('webcam_audio_record')
    request.add_tlv(TLV_TYPE_AUDIO_DURATION, duration)
    response = client.send_request(request)
    response.get_tlv(TLV_TYPE_AUDIO_DATA).value
  end
    
        if sysinfo['Architecture'] == ARCH_X64 && target.arch.first == ARCH_X86
      fail_with(Failure::NoTarget, 'Session host is x64, but the target is specified as x86')
    elsif sysinfo['Architecture'] == ARCH_X86 && target.arch.first == ARCH_X64
      fail_with(Failure::NoTarget, 'Session host is x86, but the target is specified as x64')
    end
    
        # Create a directory for the logs
    logs = ::File.join(Msf::Config.log_directory, 'persistence', Rex::FileUtils.clean_path(host + filenameinfo))
    
        report_cred(
      ip: ::Rex::Socket.resolv_to_dotted(host), # XXX: Workaround for unresolved hostnames
      port: portnum,
      service_name: sname,
      user: user_name,
      password: password
    )
    
        begin
      net_com_opts[:harness] = ::File.read(datastore['SOURCE_FILE'])
      script = dot_net_compiler(net_com_opts)
      if datastore['Powershell::Post::dry_run']
        print_good 'Compiler code:\n#{script}'
        return
      end
    rescue => e
      print_error e
      return
    end
    
      bins.each do |from, to|
    next if (from != 'metsvc.exe' and remove)
    to ||= from
    print_status(' >> Uploading #{from}...')
    fd = client.fs.file.new(tempdir + '\\' + to, 'wb')
    path = (from == 'metsrv.x86.dll') ? MetasploitPayloads.meterpreter_path('metsrv','x86.dll') : File.join(based, from)
    fd.write(::File.read(path, ::File.size(path)))
    fd.close
  end
    
      include Msf::ModuleTest::PostTest
    
          env['rack.errors'] = errors
    
          # Captures the entire amount of a payment.
      def purchase!
        handle_payment_preconditions { process_purchase }
      end
    
              line_items.each do |line_item|
            adjustments = line_item.delete(:adjustments_attributes)
            extra_params = line_item.except(:variant_id, :quantity, :sku)
            line_item = ensure_variant_id_from_params(line_item)
            variant = Spree::Variant.find(line_item[:variant_id])
            line_item = Cart::AddItem.call(order: order, variant: variant, quantity: line_item[:quantity]).value
            # Raise any errors with saving to prevent import succeeding with line items
            # failing silently.
            if extra_params.present?
              line_item.update!(extra_params)
            else
              line_item.save!
            end
            create_adjustments_from_params(adjustments, order, line_item)
          rescue Exception => e
            raise 'Order import line items: #{e.message} #{line_item}'
          end
        end
    
          # the order builds a shipment on its own on transition to delivery, but we want
      # the original exchange shipment, not the built one
      order.shipments.destroy_all
      shipments.each { |shipment| shipment.update(order_id: order.id) }
      order.update!(state: 'confirm')
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
          insist { input.attributes[:snap_confinement] } == 'test-confinement'
    end
    
          @command.dependencies.tap do |dependencies|
        # Verify dependencies don't include commas (#257)
        dependencies.each do |dep|
          next unless dep.include?(',')
          splitdeps = dep.split(/\s*,\s*/)
          @messages << 'Dependencies should not ' \
            'include commas. If you want to specify multiple dependencies, use ' \
            'the '-d' flag multiple times. Example: ' + \
            splitdeps.map { |d| '-d '#{d}'' }.join(' ')
        end
      end
    
        # Write +COMPACT_MANIFEST, without the 'files' section.
    File.open(staging_path('+COMPACT_MANIFEST'), 'w+') do |file|
      file.write(pkgdata.to_json + '\n')
    end
    
        self.attributes[:pacman_optional_depends] = control['optdepend'] || []
    # There are other available attributes, but I didn't include them because:
    # - makedepend: deps needed to make the arch package. But it's already
    #   made. It just needs to be converted at this point
    # - checkdepend: See above
    # - makepkgopt: See above
    # - size: can be dynamically generated
    # - builddate: Should be changed to time of package conversion in the new
    #   package, so this value should be thrown away.
    
        target = build_path(package)
    FileUtils.mkdir(target) unless File.directory?(target)