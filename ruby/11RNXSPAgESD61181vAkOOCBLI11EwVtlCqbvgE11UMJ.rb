      if new_path.length != old_path.length
        new_path.length >= old_path.length
      elsif new_scope.key?('type')
        true
      else
        !old_scope.key? 'type'
      end
    end
    # rubocop: enable PredicateName
    
          def parse(content)
        measure_time do
          @template = Liquid::Template.parse(content, :line_numbers => true)
        end
    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
      class ImageTag < Liquid::Tag
    @img = nil
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
              def logstash_plugin_gem_spec?(spec)
            spec.metadata && spec.metadata['logstash_plugin'] == 'true'
          end