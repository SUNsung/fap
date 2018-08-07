
        
          before_action :upgrade_warning, only: :index
    
            entries = []
    
        version '3' do
      self.release = '3.3.7'
      self.base_url = 'https://getbootstrap.com/docs/3.3/'
      self.root_path = 'getting-started/'
    
        # Returns the Sass/SCSS code for the media query.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      src = ''
      src << Sass::Media._interp_to_src(modifier, options)
      src << ' ' unless modifier.empty?
      src << Sass::Media._interp_to_src(type, options)
      src << ' and ' unless type.empty? || expressions.empty?
      src << expressions.map do |e|
        Sass::Media._interp_to_src(e, options)
      end.join(' and ')
      src
    end