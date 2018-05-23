
        
            find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
          def mailer_sender(mapping, sender = :from)
        default_sender = default_params[sender]
        if default_sender.present?
          default_sender.respond_to?(:to_proc) ? instance_eval(&default_sender) : default_sender
        elsif Devise.mailer_sender.is_a?(Proc)
          Devise.mailer_sender.call(mapping.name)
        else
          Devise.mailer_sender
        end
      end
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
            if base_url.path == '/spec/'
          index = css('.subnav li a').to_a.index(at_css('.subnav li a[href='#{result[:path]}']')) + 1
          name.prepend '#{index}. '
        end
    
        version '2' do
      self.release = '2.3.0'
      self.base_url = 'http://coffeescript.org/'
    
          options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        options[:attribution] = <<-HTML
      &copy; Joyent, Inc. and other Node contributors<br>
      Licensed under the MIT License.<br>
      Node.js is a trademark of Joyent, Inc. and is used with its permission.<br>
      We are not endorsed by or affiliated with Joyent.
    HTML
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
      attributes :id, :type, :name, :updated
    
        grouped_codes = codes.reduce([]) do |agg, current|
      if current[1]
        agg << [current[0]]
      else
        agg.last << current[0]
        agg
      end
    end
    
        def parse_symbol_spec(spec, tags)
      case spec
      when :clt
        odisabled ''depends_on :clt''
      when :tex
        odisabled ''depends_on :tex''
      when :libltdl
        output_disabled(spec, 'libtool')
      when :apr
        output_disabled(spec, 'apr-util')
      when :fortran
        output_disabled(spec, 'gcc')
      when :gpg
        output_disabled(spec, 'gnupg')
      when :hg
        output_disabled(spec, 'mercurial')
      when :mpi
        output_disabled(spec, 'open-mpi')
      when :python, :python2
        output_disabled(spec, 'python@2')
      when :python3
        output_disabled(spec, 'python')
      when :ant, :autoconf, :automake, :bsdmake, :cairo, :emacs, :expat,
           :fontconfig, :freetype, :libtool, :libpng, :mysql, :perl, :pixman,
           :postgresql, :rbenv, :ruby
        output_disabled(spec)
      else
        super
      end
    end