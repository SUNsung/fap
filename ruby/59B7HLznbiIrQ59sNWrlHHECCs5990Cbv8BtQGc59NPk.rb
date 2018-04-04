
        
        def bottle_tag
  if MacOS.version >= :lion
    MacOS.cat
  elsif MacOS.version == :snow_leopard
    Hardware::CPU.is_64_bit? ? :snow_leopard : :snow_leopard_32
  else
    # Return, e.g., :tiger_g3, :leopard_g5_64, :leopard_64 (which is Intel)
    if Hardware::CPU.type == :ppc
      tag = '#{MacOS.cat}_#{Hardware::CPU.family}'.to_sym
    else
      tag = MacOS.cat
    end
    MacOS.prefer_64_bit? ? '#{tag}_64'.to_sym : tag
  end
end
    
      def std_cmake_parameters
    '-DCMAKE_INSTALL_PREFIX='#{prefix}' -DCMAKE_BUILD_TYPE=None -DCMAKE_FIND_FRAMEWORK=LAST -Wno-dev'
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      def evernote_client
    EvernoteOAuth::Client.new(
      token:           evernote_oauth_token,
      consumer_key:    evernote_consumer_key,
      consumer_secret: evernote_consumer_secret,
      sandbox:         use_sandbox?
    )
  end
    
      def tumblr_oauth_token
    service.token
  end
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
      def import
    if params[:file]
      file = params[:file]
      content = JSON.parse(file.read)
      new_credentials = content.map do |hash|
        current_user.user_credentials.build(hash.slice('credential_name', 'credential_value', 'mode'))
      end
    
    puts '* System info:'
    
    require 'rubygems'
require 'rjb'
    
    vers.each do |ver|
  case ver
  when '6.1.4'
    __NR_execve      = 7
    __NR_getpeername = 211
    __NR_accept      = 237
    __NR_listen      = 240
    __NR_bind        = 242
    __NR_socket      = 243
    __NR_connect     = 244
    __NR_close       = 278
    __NR_kfcntl      = 658
    
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
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
        # Converts a script node into a corresponding string interpolation
    # expression.
    #
    # @param node_or_interp [Sass::Script::Tree::Node]
    # @return [Sass::Script::Tree::StringInterpolation]
    def to_string_interpolation(node_or_interp)
      unless node_or_interp.is_a?(Interpolation)
        node = node_or_interp
        return string_literal(node.value.to_s) if node.is_a?(Literal)
        if node.is_a?(StringInterpolation)
          return concat(string_literal(node.quote), concat(node, string_literal(node.quote)))
        end
        return StringInterpolation.new(string_literal(''), node, string_literal(''))
      end
    
        def processors
      processing_option = @options[:processors]
    
            protected
    
    
    {
    {  # Returns hash with styles for all classes using Paperclip.
  # Unfortunately current version does not work with lambda styles:(
  #   {
  #     :User => {:avatar => [:small, :big]},
  #     :Book => {
  #       :cover => [:thumb, :croppable]},
  #       :sample => [:thumb, :big]},
  #     }
  #   }
  def self.current_attachments_styles
    Hash.new.tap do |current_styles|
      Paperclip::AttachmentRegistry.each_definition do |klass, attachment_name, attachment_attributes|
        # TODO: is it even possible to take into account Procs?
        next if attachment_attributes[:styles].kind_of?(Proc)
        attachment_attributes[:styles].try(:keys).try(:each) do |style_name|
          klass_sym = klass.to_s.to_sym
          current_styles[klass_sym] ||= Hash.new
          current_styles[klass_sym][attachment_name.to_sym] ||= Array.new
          current_styles[klass_sym][attachment_name.to_sym] << style_name.to_sym
          current_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
        end
      end
    end
  end
  private_class_method :current_attachments_styles
    
          def remove_attachment(table_name, *attachment_names)
        raise ArgumentError, 'Please specify attachment name in your remove_attachment call in your migration.' if attachment_names.empty?