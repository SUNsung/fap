
        
        def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
          #
    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
          def additional_options
        if self.class.internal_urls
          super.merge! \
            only: self.class.internal_urls.to_set,
            only_patterns: nil,
            skip: nil,
            skip_patterns: nil,
            skip_links: nil,
            fixed_internal_urls: true
        else
          super
        end
      end
    
            doc
      end
    end
  end
end

    
            css('a[id]:empty').each do |node|
          node.next_element['id'] = node['id'] if node.next_element
        end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
          @command.output_type.tap do |val|
        next if val.nil?
        mandatory(FPM::Package.types.include?(val),
                  'Invalid output package (-t flag) type #{val.inspect}. ' \
                  'Expected one of: #{types.join(', ')}')
      end
    
      option '--package-name-prefix', 'PREFIX', 'Name to prefix the package ' \
    'name with.', :default => 'node'
    
        # Licenses could include more than one.
    # Speaking of just taking the first entry of the field:
    # A crude thing to do, but I suppose it's better than nothing.
    # -- Daniel Haskin, 3/24/2015
    self.license = control['license'][0] || self.license
    
        if attributes[:pear_php_dir]
      logger.info('Setting php_dir', :php_dir => attributes[:pear_php_dir])
      safesystem('pear', '-c', config, 'config-set', 'php_dir', '#{staging_path(installroot)}/#{attributes[:pear_php_dir]}')
    end
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile
    
      # Generate the proper tar flags based on the path name.
  def tar_compression_flag(path)
    case path
      when /\.tar\.bz2$/
        return '-j'
      when /\.tar\.gz$|\.tgz$/
        return '-z'
      when /\.tar\.xz$/
        return '-J'
      else
        return nil
    end
  end # def tar_compression_flag
end # class FPM::Package::Tar

    
          case
      when value.is_a?(String), value.is_a?(Symbol)
        %W(--#{opt} #{value})
      when value.is_a?(Array)
        value.map { |v| %W(--#{opt} #{v}) }
      when value.is_a?(TrueClass)
        '--#{opt}'
      when value.is_a?(FalseClass)
        '--no-#{opt}'
      else
        fail TypeError, 'Unexpected type: #{value.class}'
      end
    end
  end
    
          @io.write header