
        
            def translation_scope
      'devise.unlocks'
    end
end

    
              record = to_adapter.get(id)
          record if record && record.remember_me?(token, generated_at)
        end
    
          def next_link
        label = 'Next &raquo;'
        if @versions.size == Gollum::Page.per_page
          link = '/history/#{@page.name}?page=#{@page_num+1}'
          %(<a href='#{link}' hotkey='l'>#{label}</a>)
        else
          %(<span class='disabled'>#{label}</span>)
        end
      end
    end
  end
end

    
          def js # custom js
        @js
      end
    
    def testpath(path)
  File.join(TEST_DIR, path)
end
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
    def bump_version
  old_file = File.read('lib/#{name}.rb')
  old_version_line = old_file[/^\s*VERSION\s*=\s*.*/]
  new_version = next_version
  # replace first match of old vesion with new version
  old_file.sub!(old_version_line, '  VERSION = '#{new_version}'')
    
        def forbid(msg = 'Forbidden. This wiki is set to no-edit mode.')
      @message = msg
      status 403
      halt mustache :error
    end
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
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
    
        # Create a temporary config file
    logger.debug('Creating pear config file')
    config = File.expand_path(build_path('pear.config'))
    installroot = attributes[:prefix] || '/usr/share'
    safesystem('pear', 'config-create', staging_path(installroot), config)
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
    # Like the ::Gem::Package::TarWriter but contains some backports and bug fixes
class FPM::Util::TarWriter < ::Gem::Package::TarWriter
  if FPM::Issues::TarWriter.has_issues_with_split_name?
    def split_name(name)
      if name.bytesize > 256 then
        raise ::Gem::Package::TooLongFileName.new('File \'#{name}\' has a too long path (should be 256 or less)')
      end