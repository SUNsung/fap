
        
              def convert_key(key)
        key.is_a?(Symbol) ? key.to_s : key
      end
    end
  end
end

    
                  # Check if data is actually ready on this IO device.
              # We have to do this since `readpartial` will actually block
              # until data is available, which can cause blocking forever
              # in some cases.
              results = ::IO.select([io], nil, nil, 1.0)
              break if !results || results[0].empty?
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
      option '--registry', 'NPM_REGISTRY',
    'The npm registry to use instead of the default.'
    
        # Combine template and filelist; allow user to edit before proceeding
    File.open(manifest_fn, 'w') do |manifest|
      manifest.write metadata_template
      manifest.write pkg_generate
    end
    edit_file(manifest_fn) if attributes[:edit?]
    
        it 'should include the dist when specified' do
      subject.name = 'name'
      subject.version = '123'
      subject.architecture = 'all'
      subject.iteration = '100'
      subject.epoch = '5'
    
      it 'should list provides matching the gem_package_name_prefix (#585)' do
    insist { subject.provides }.include?('rubygem19(whatever) = 1.0')
  end
end

    
      shared_examples_for :Mutator do |item|
    context 'when set' do
      let(:value) { 'whatever' }
      it 'should return the set value' do
        expect(subject.send('#{item}=', value)).to(be == value)
      end