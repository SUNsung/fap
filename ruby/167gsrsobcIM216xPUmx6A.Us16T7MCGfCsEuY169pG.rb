
        
            %w(<< concat push insert unshift).each do |method|
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{method}(*args)
          paths.#{method}(*typecast(args))
        end
      METHOD
    end
    
    module ActionView
  # This class defines the interface for a renderer. Each class that
  # subclasses +AbstractRenderer+ is used by the base +Renderer+ class to
  # render a specific type of object.
  #
  # The base +Renderer+ class uses its +render+ method to delegate to the
  # renderers. These currently consist of
  #
  #   PartialRenderer - Used for rendering partials
  #   TemplateRenderer - Used for rendering other types of templates
  #   StreamingTemplateRenderer - Used for streaming
  #
  # Whenever the +render+ method is called on the base +Renderer+ class, a new
  # renderer object of the correct type is created, and the +render+ method on
  # that new object is called in turn. This abstracts the setup and rendering
  # into a separate classes for partials and templates.
  class AbstractRenderer #:nodoc:
    delegate :find_template, :find_file, :template_exists?, :any_templates?, :with_fallbacks, :with_layout_format, :formats, to: :@lookup_context
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
            it 'adds errors when updated agents are invalid' do
          scenario_import.merges = {
            '0' => {
              'name' => '',
              'schedule' => 'foo',
              'keep_events_for' => 2.days.to_i.to_s,
              'options' => weather_agent_options.merge('api_key' => '').to_json
            }
          }
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
      it 'converts values to Float' do
    expect(location.lat).to be_a Float
    expect(location.lat).to eq 2.0
    expect(location.lng).to be_a Float
    expect(location.lng).to eq 3.0
    expect(location.radius).to be_a Float
    expect(location.radius).to eq 300.0
    expect(location.speed).to be_a Float
    expect(location.speed).to eq 2.0
    expect(location.course).to be_a Float
    expect(location.course).to eq 30.0
  end
    
      def to_str
    @paths.join(File::PATH_SEPARATOR)
  end
  alias to_s to_str
    
      prepend Compat
end

    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
    module Gollum
end
Gollum::GIT_ADAPTER = ENV['GIT_ADAPTER'] if ENV['GIT_ADAPTER']
    
    context 'Precious::Views::Editing' do
  include Rack::Test::Methods
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    Precious::App.set(:gollum_path, @path)
    FileUtils.cp_r File.join(examples, 'revert.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    # assumes x.y.z all digit version
def next_version
  # x.y.z
  v = version.split '.'
  # bump z
  v[-1] = v[-1].to_i + 1
  v.join '.'
end
    
          @CONF[:IRB_RC].call(irb.context) if @CONF[:IRB_RC]
      @CONF[:MAIN_CONTEXT] = irb.context
    
      s.require_paths = %w[lib]