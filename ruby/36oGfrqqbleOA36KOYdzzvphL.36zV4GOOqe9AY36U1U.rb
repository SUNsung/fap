
        
              File.open(filename, 'wb') do |post|
        post.puts('---')
        post.puts('title: 'Jekyll #{release} Released'')
        post.puts('date: #{Time.new.strftime('%Y-%m-%d %H:%M:%S %z')}')
        post.puts('author: ')
        post.puts('version: #{release}')
        post.puts('category: release')
        post.puts('---')
        post.puts
        post.puts
      end
    
              # Remove the -p option if --archive is enabled (--archive equals -rlptgoD)
          # otherwise new files will not have the destination-default permissions
          args << '--no-perms' if args.include?('--archive') || args.include?('-a')
        end
    
          env[:box_force] = true
      env[:box_url] = tf.path
      allow(box_collection).to receive(:find).and_return(box)
      expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
        expect(checksum(path)).to eq(checksum(box_path))
        expect(name).to eq('foo/bar')
        expect(version).to eq('0.7')
        expect(opts[:force]).to be(true)
        expect(opts[:metadata_url]).to eq('file://#{tf.path}')
        true
      }.and_return(box)
    
          # Let's now add this box again under a different name, and then
      # verify that we get the proper result back.
      new_box = box_collection.add(box_output_path, 'foo2', '1.0')
      expect(new_box.directory.join('test_file').read).to eq(test_file_contents)
    end
  end
    
      subject { described_class }
    
      let(:iso_env) { isolated_environment }
  let(:env) { iso_env.create_vagrant_env }
    
            it 'creates a reblog by sender of status' do
          expect(sender.reblogged?(sender.statuses.first)).to be true
        end
      end
    end
    
      def reject_follow!(follow)
    follow.destroy
    
      def some_local_account
    @some_local_account ||= Account.representative
  end
end

    
      private
    
        let(:validator) { described_class.new(attributes: [attribute]) }
    let(:record)    { double(errors: errors) }
    let(:errors)    { double(add: nil) }
    let(:value)     { '' }
    let(:attribute) { :foo }
    
        when /osx|bsd/
      [
        '/Applications/Google Chrome.app',
        '/Applications/Firefox.app'
      ].each do |browser_path|
        if file?(browser_path)
          found_browser_path = browser_path
          break
        end
      end
    when /linux|unix/
      # Need to add support for Linux in the future.
      # But you see, the Linux meterpreter is so broken there is no point
      # to do it now. You can't test anyway.
    end
    
          print_line
      r[:profiles].each do |p|
        table << [p[:name], p[:auth], p[:key_type] || 'Unknown', p[:shared_key]]
      end
    
        # Write to %temp% directory if not set REMOTE_EXE_PATH
    else
      temprexe = session.sys.config.getenv('TEMP') + '\\' + rexename
      write_file_to_target(temprexe,rexe)
    end
    
          begin
        temprexe = datastore['LocalExePath'] + '\\' + rexename
        write_file_to_target(temprexe,rexe)
      rescue Rex::Post::Meterpreter::RequestError
        print_warning('Insufficient privileges to write in #{datastore['LocalExePath']}, writing to %TEMP%')
        temprexe = session.sys.config.getenv('TEMP') + '\\' + rexename
        write_file_to_target(temprexe,rexe)
      end
    
    module Rex
module Post
module Meterpreter
module Extensions
module Stdapi
    
    require 'msf/core/handler/reverse_https'
require 'msf/base/sessions/meterpreter_options'
require 'msf/base/sessions/mettle_config'
require 'msf/base/sessions/meterpreter_x64_osx'
    
      spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
        assert_equal (0),                                          CMath.log2(1)
    assert_in_delta (1.1609640474436813+1.5972779646881088i),  CMath.log2(1+2i)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.log2('1') }
    
        ScratchPad.record []
    while true
      begin
        ScratchPad << enum.next
      rescue StopIteration
        break
      end
    end
    
      after :each do
    ScratchPad.clear
  end
    
      it 'inflates chunked data' do
    @chunks.map { |chunk| chunk.length }.should == [16384, 16384, 16384, 16384, 16384, 16384, 1696]
  end
    
      namespace :check do
    desc 'Check shared and release directories exist'
    task :directories do
      on release_roles :all do
        execute :mkdir, '-p', shared_path, releases_path
      end
    end
    
    Then(/doesn't contain '([^']*)' in the output/) do |expected|
  expect(@output).not_to include(expected)
end
    
        require 'capistrano/scm/#{scm_name}'
    install_plugin #{built_in_scm_plugin_class_name}
    
          private
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
        it 'returns a hash with the flare tag's name' do
      expect(described_class.new(valid_article).tag_hash.value?('ama')).to be true
    end
    
      context 'when redirected routes' do
    include RSpec::Rails::RequestExampleGroup
    
      def destroy?
    update?
  end
    
      # Never trust parameters from the scary internet, only allow a subset to go through.
  def user_params
    accessible = %i[
      email
      shipping_name
      shipping_company
      shipping_address
      shipping_address_line_2
      shipping_city
      shipping_state
      shipping_country
      shipping_postal_code
      shipping_validated
      top_languages
      experience_level
      specialty
      tabs_or_spaces
      onboarding_package_requested
      onboarding_package_form_submmitted_at
      personal_data_updated_at
      shirt_size
      shirt_gender
    ]
    params.require(:user).permit(accessible)
  end
    
        def insufficient_stock_lines
      line_items.select(&:insufficient_stock?)
    end
    
        def set(*args)
      options = args.extract_options!
      options.each do |name, value|
        set_preference name, value
      end
    
                adjustments = s.delete(:adjustments_attributes)
            create_adjustments_from_params(adjustments, order, shipment)
          rescue Exception => e
            raise 'Order import shipments: #{e.message} #{s}'
          end
        end
    
    RSpec.configure do |config|
  # Need to check here again because this is used in i18n_spec too.
  if ENV['CHECK_TRANSLATIONS']
    config.after :suite do
      Spree.check_missing_translations
      if Spree.missing_translation_messages.any?
        puts '\nThere are missing translations within Spree:'
        puts Spree.missing_translation_messages.sort
        exit(1)
      end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
          time = Time.now.to_f
      Sidekiq.redis do |conn|
        conn.multi do
          conn.sadd('processes', odata['key'])
          conn.hmset(odata['key'], 'info', Sidekiq.dump_json(odata), 'busy', 10, 'beat', time)
          conn.sadd('processes', 'fake:pid')
        end
      end
    
      it 'creates N processor instances' do
    mgr = new_manager(options)
    assert_equal options[:concurrency], mgr.workers.size
  end
    
        Sidekiq.server_middleware do |chain|
      # should only add once, second should replace the first
      2.times { |i| chain.add CustomMiddleware, i.to_s, $recorder }
      chain.insert_before CustomMiddleware, AnotherCustomMiddleware, '2', $recorder
      chain.insert_after AnotherCustomMiddleware, YetAnotherCustomMiddleware, '3', $recorder
    end
    
          Time.stub(:now, created_time) do
        @retry.schedule (enqueued_time - 60).to_f, @error_1.merge!('created_at' => created_time.to_f)
        @retry.schedule (enqueued_time - 50).to_f, @error_2.merge!('created_at' => created_time.to_f)
        @retry.schedule (enqueued_time + 60).to_f, @error_3.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time - 60).to_f, @future_1.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time - 50).to_f, @future_2.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time + 60).to_f, @future_3.merge!('created_at' => created_time.to_f)
      end
    
      describe 'with middleware' do
    before do
      require 'sidekiq/testing'
    end