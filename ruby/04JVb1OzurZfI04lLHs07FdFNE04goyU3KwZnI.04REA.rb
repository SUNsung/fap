
        
            # This will detect the proper guest OS for the machine and set up
    # the class to actually execute capabilities.
    def detect!
      guest_name = @machine.config.vm.guest
      initialize_capabilities!(guest_name, @guests, @capabilities, @machine)
    rescue Errors::CapabilityHostExplicitNotDetected => e
      raise Errors::GuestExplicitNotDetected, value: e.extra_data[:value]
    rescue Errors::CapabilityHostNotDetected
      raise Errors::GuestNotDetected
    end
    
              # We split the arguments into two: One set containing any
          # flags before a word, and then the rest. The rest are what
          # get actually sent on to the subcommand.
          argv.each_index do |i|
            if !argv[i].start_with?('-')
              # We found the beginning of the sub command. Split the
              # args up.
              main_args   = argv[0, i]
              sub_command = argv[i]
              sub_args    = argv[i + 1, argv.length - i + 1]
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # This contains all the registered provider capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :provider_capabilities
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
      test 'previews content on the first page of an empty wiki' do
    @path = cloned_testpath('examples/empty.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {})
    post '/preview', :content => 'abc', :format => 'markdown'
    assert last_response.ok?
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
end

    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
end

    
    context 'Unicode Support' do
  setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
  end
    
      # determine file list from git ls-files
  files = `git ls-files`.
    split('\n').
    sort.
    reject { |file| file =~ /^\./ }.
    reject { |file| file =~ /^(rdoc|pkg|test|Home\.md|\.gitattributes)/ }.
    map { |file| '    #{file}' }.
    join('\n')
    
              html_options.delete('data-update') unless html_options['data-update']
    
                expect(order.shipments.count).to eq(2)
            expect(order.shipments.last.backordered?).to eq(false)
            expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(1)
            expect(order.shipments.last.inventory_units_for(product.master).sum(&:quantity)).to eq(1)
          end
    
                respond_with(@order, default_template: :show, status: 201)
          else
            @order = Spree::Order.create!(user: current_api_user, store: current_store)
            if Cart::Update.call(order: @order, params: order_params).success?
              respond_with(@order, default_template: :show, status: 201)
            else
              invalid_resource!(@order)
            end
          end
        end
    
            def destroy
          authorize! :destroy, @product
          @product.destroy
          respond_with(@product, status: 204)
        end
    
              def resource_serializer
            Spree::Api::Dependencies.storefront_cart_serializer.constantize
          end
    
          if param == :flag
        # Automatically make 'flag' (boolean) options tunable with '--[no-]...'
        flag = flag.collect { |f| '--[no-]#{type}-#{f.gsub(/^--/, '')}' }
      else
        flag = flag.collect { |f| '--#{type}-#{f.gsub(/^--/, '')}' }
      end
    
        # Execute the transmogrification on the manifest
    pkg_mogrify = safesystemout('pkgmogrify', manifest_fn)
    File.write(build_path('#{name}.p5m.2'), pkg_mogrify)
    safesystem('cp', build_path('#{name}.p5m.2'), manifest_fn)
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
    
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
        # Prefer tar that supports more of the features we want, stop if we find tar of our dreams
    best='tar'
    bestscore=0
    @@tar_cmd_deterministic = false
    # GNU Tar, if not the default, is usually on the path as gtar, but
    # Mac OS X 10.8 and earlier shipped it as /usr/bin/gnutar
    ['tar', 'gtar', 'gnutar'].each do |tar|
      opts=[]
      score=0
      ['--sort=name', '--mtime=@0'].each do |opt|
        system('#{tar} #{opt} -cf fpm-dummy.tar.tmp fpm-dummy.tmp > /dev/null 2>&1')
        if $?.exitstatus == 0
          opts << opt
          score += 1
        end
      end
      if score > bestscore
        best=tar
        bestscore=score
        if score == 2
          @@tar_cmd_deterministic = true
          break
        end
      end
    end
    @@tar_cmd = best
    return @@tar_cmd
  ensure
    # Clean up
    FileUtils.rm_f(['fpm-dummy.tar.tmp', 'fpm-dummy.tmp'])
  end # def tar_cmd