
        
        $z = $x.keys.sort.join(':')
test_ok($z == '1:2:3')
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end