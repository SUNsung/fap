
        
          formula = ARGV.formulae.first
  options = Options.create(ARGV.flags_only)
  build   = Build.new(formula, options)
  build.install
rescue Exception => e
  Marshal.dump(e, error_pipe)
  error_pipe.close
  exit! 1
end

    
        option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
    # See chcase for an example
class ScriptFileFormula < Formula
  def install
    bin.install Dir['*']
  end
end
    
          if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
          { :title => 'Event', :entries => present_hash(payload) }
    else
      { :title => payload.to_s, :entries => [] }
    end
  end
    
        def ensure_id_sequences_exist
      # Find tables using timestamp IDs.
      connection.tables.each do |table|
        # We're only concerned with 'id' columns.
        next unless (id_col = connection.columns(table).find { |col| col.name == 'id' })
    
        # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
      GEMFILE_EXTENSIONS.each do |extension|
    extension_pathname = root.join('Gemfile#{extension}')
    
        self.sigs.each_key do |k|
      # There is only one pattern per run to test
      matched = nil
      matches = nil
    
    # This is a completely hackish way to do this, and could break with future
# versions of the JDK.  Need to find a better way to use sun.security.tools.KeyTool
# and .JarSigner than modifying the source.  These rely on internal APIs that may
# change.
signer = Rjb::import('javaCompile.SignJar')
#clsKeyTool = Rjb::import('sun.security.tools.KeyTool')
#clsKeyTool = Rjb::import('sun.security.tools.KeyToolMSF')
#clsJarSigner = Rjb::import('javaCompile.SignJar.JarSignerMSF')
#clsJarSigner = Rjb::import('sun.security.tools.JarSigner')
#clsJarSigner = Rjb::import('sun.security.tools.JarSignerMSF')
    
        def queue_all_for_delete #:nodoc:
      return if !file?
      unless @options[:preserve_files]
        @queued_for_delete += [:original, *styles.keys].uniq.map do |style|
          path(style) if exists?(style)
        end.compact
      end
      instance_write(:file_name, nil)
      instance_write(:content_type, nil)
      instance_write(:file_size, nil)
      instance_write(:fingerprint, nil)
      instance_write(:created_at, nil) if has_enabled_but_unset_created_at?
      instance_write(:updated_at, nil)
    end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end