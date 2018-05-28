
        
        map = {}
dups = []
    
      def participation_count
    poll_answers.sum('vote_count')
  end
end

    
          def http_error_page_as_json(e)
        render json: {error: :invalid_request, error_description: e.message}, status: 400
      end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      # Condenses multiple spaces and tabs into a single space
  def condense_spaces(input)
    input.gsub(/\s{2,}/, ' ')
  end
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)