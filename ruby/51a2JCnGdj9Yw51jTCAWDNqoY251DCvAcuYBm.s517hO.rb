
        
              out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
          opts.on('-F', '--from FORMAT',
        'The format to convert from. Can be css, scss, sass.',
        'By default, this is inferred from the input filename.',
        'If there is none, defaults to css.') do |name|
        @options[:from] = name.downcase.to_sym
        raise 'sass-convert no longer supports LessCSS.' if @options[:from] == :less
        unless [:css, :scss, :sass].include?(@options[:from])
          raise 'Unknown format for sass-convert --from: #{name}'
        end
      end
    
        @inner.log_level = log_level
    Sass.logger = @inner
  end
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end