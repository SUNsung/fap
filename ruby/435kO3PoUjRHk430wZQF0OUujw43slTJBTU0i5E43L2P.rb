
        
        FORWARD_SLASH = '/'.freeze
    
      end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''