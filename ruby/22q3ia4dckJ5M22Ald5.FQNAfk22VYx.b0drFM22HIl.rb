
        
            ret = [
      ['crypto', 'CRYPTO_malloc'],
      ['ssl', 'SSL_new']
    ].all? do |base, func|
      result = false
      libs = ['lib#{base}-[0-9][0-9]', 'lib#{base}-[0-9][0-9][0-9]']
      libs = Dir.glob(libs.map{|l| libpath.map{|d| File.join(d, l + '.*')}}.flatten).map{|path| File.basename(path, '.*')}.uniq
      libs.each do |lib|
        result = have_library(lib, func)
        break if result
      end
      result
    end
    return ret if ret
  end
  return false
end
    
      # Sets the last +Error+ of the current executing +Thread+ to +error+
  def self.last_error= error
    Thread.current[:__DL2_LAST_ERROR__] = error
    Thread.current[:__FIDDLE_LAST_ERROR__] = error
  end
    
        # Given a String of C type +ty+, returns the corresponding Fiddle constant.
    #
    # +ty+ can also accept an Array of C type Strings, and will be returned in
    # a corresponding Array.
    #
    # If Hash +tymap+ is provided, +ty+ is expected to be the key, and the
    # value will be the C type to be looked up.
    #
    # Example:
    #   require 'fiddle/import'
    #
    #   include Fiddle::CParser
    #     #=> Object
    #
    #   parse_ctype('int')
    #     #=> Fiddle::TYPE_INT
    #
    #   parse_ctype('double diff')
    #     #=> Fiddle::TYPE_DOUBLE
    #
    #   parse_ctype('unsigned char byte')
    #     #=> -Fiddle::TYPE_CHAR
    #
    #   parse_ctype('const char* const argv[]')
    #     #=> -Fiddle::TYPE_VOIDP
    #
    def parse_ctype(ty, tymap=nil)
      tymap ||= {}
      case ty
      when Array
        return [parse_ctype(ty[0], tymap), ty[1]]
      when 'void'
        return TYPE_VOID
      when /^(?:(?:signed\s+)?long\s+long(?:\s+int\s+)?|int64_t)(?:\s+\w+)?$/
        if( defined?(TYPE_LONG_LONG) )
          return TYPE_LONG_LONG
        else
          raise(RuntimeError, 'unsupported type: #{ty}')
        end
      when /^(?:unsigned\s+long\s+long(?:\s+int\s+)?|uint64_t)(?:\s+\w+)?$/
        if( defined?(TYPE_LONG_LONG) )
          return -TYPE_LONG_LONG
        else
          raise(RuntimeError, 'unsupported type: #{ty}')
        end
      when /^(?:signed\s+)?long(?:\s+int\s+)?(?:\s+\w+)?$/
        return TYPE_LONG
      when /^unsigned\s+long(?:\s+int\s+)?(?:\s+\w+)?$/
        return -TYPE_LONG
      when /^(?:signed\s+)?int(?:\s+\w+)?$/
        return TYPE_INT
      when /^(?:unsigned\s+int|uint)(?:\s+\w+)?$/
        return -TYPE_INT
      when /^(?:signed\s+)?short(?:\s+int\s+)?(?:\s+\w+)?$/
        return TYPE_SHORT
      when /^unsigned\s+short(?:\s+int\s+)?(?:\s+\w+)?$/
        return -TYPE_SHORT
      when /^(?:signed\s+)?char(?:\s+\w+)?$/
        return TYPE_CHAR
      when /^unsigned\s+char(?:\s+\w+)?$/
        return  -TYPE_CHAR
      when /^float(?:\s+\w+)?$/
        return TYPE_FLOAT
      when /^double(?:\s+\w+)?$/
        return TYPE_DOUBLE
      when /^size_t(?:\s+\w+)?$/
        return TYPE_SIZE_T
      when /^ssize_t(?:\s+\w+)?$/
        return TYPE_SSIZE_T
      when /^ptrdiff_t(?:\s+\w+)?$/
        return TYPE_PTRDIFF_T
      when /^intptr_t(?:\s+\w+)?$/
        return TYPE_INTPTR_T
      when /^uintptr_t(?:\s+\w+)?$/
        return TYPE_UINTPTR_T
      when /\*/, /\[[\s\d]*\]/
        return TYPE_VOIDP
      else
        ty = ty.split(' ', 2)[0]
        if( tymap[ty] )
          return parse_ctype(tymap[ty], tymap)
        else
          raise(DLError, 'unknown type: #{ty}')
        end
      end
    end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
        settings['prefix'] = staging_path(attributes[:prefix])
    FileUtils.mkdir_p(settings['prefix'])
    
        # Execute the transmogrification on the manifest
    pkg_mogrify = safesystemout('pkgmogrify', manifest_fn)
    File.write(build_path('#{name}.p5m.2'), pkg_mogrify)
    safesystem('cp', build_path('#{name}.p5m.2'), manifest_fn)