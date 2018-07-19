
        
          attributes :id, :type, :name, :updated
    
      def short_name
    object.site_title
  end
    
      def inspect
    '#<#{self.class.name}: #{strip.inspect}>'
  end
end
    
          class PyPiUrls < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, body_node)
          urls = find_every_func_call_by_name(body_node, :url)
          mirrors = find_every_func_call_by_name(body_node, :mirror)
          urls += mirrors
    
            def initialize
          @values = []
        end
    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')
    
        orig_stdout = $stdout
    orig_stderr = $stderr
    captured_stdout = StringIO.new
    captured_stderr = StringIO.new
    $stdout = captured_stdout
    $stderr = captured_stderr