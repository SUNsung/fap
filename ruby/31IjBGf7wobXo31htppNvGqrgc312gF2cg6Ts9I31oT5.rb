
        
            if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
      def new
    @broadcast = Broadcast.new
  end
    
        wordsize = case @architecture
    when nil, 'native'
      %x{getconf LONG_BIT}.chomp # 'native' is current arch
    when 'amd64'
      '64'
    when 'i386'
      '32'
    else
      %x{getconf LONG_BIT}.chomp # default to native, the current arch
    end
    
      # Output a pkgbuild pkg.
  def output(output_path)
    output_check(output_path)
    
        File.write(build_path('comment'),  self.description + '\n')
    
            self.dependencies << '#{name} #{cmp} #{version}'
      end
    end # if attributes[:python_dependencies?]
  end # def load_package_info
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar

    
        if block_given? and opts[:stdin]
      process.duplex = true
    end