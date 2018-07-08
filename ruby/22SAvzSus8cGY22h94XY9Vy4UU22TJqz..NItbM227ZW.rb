
        
        def usage
  <<-EOS
Usage: list_login_items_for_app <path.app>
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end